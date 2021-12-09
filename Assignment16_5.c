/*
   Accept N numbers from user and display all such a elements which are 
   multiplies of 11.
   
   input : 6    Elements : 85 66 3 55 93 88
   output :  66 55 88
*/

#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[] , int iLength)
{
  int i = 0;
  for(i = 0; i < iLength; i++)
  {
    if((Arr[i] % 11) == 0) 
    {
      printf("%d\t",Arr[i]);
    }
  }
  printf("\n");
}

int main()
{
  int iSize = 0 , iCnt = 0;
  int *p = NULL;
  
  printf("Enter Number of elements :\n");
  scanf("%d",&iSize);
  
  p = (int*)malloc(sizeof(int) * iSize);
  
  if(p == NULL)
  {
    printf("Unable to allocate memory\n");
    return -1;
  }
  
  printf("Enter %d elements\n" , iSize);
  
  for(iCnt = 0; iCnt < iSize; iCnt++)
  {
    printf("Enter elements : %d\n",iCnt + 1);
    scanf("%d",&p[iCnt]);
  }
  
  Display(p , iSize);
  
  free(p);
  return 0;
}
