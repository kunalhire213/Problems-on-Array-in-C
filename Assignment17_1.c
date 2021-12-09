/*
   Accept N numbers from user and return frequency of even numbers.
   
   input : 6    Elements : 85 66 3 80 93 88
   output :  3
*/

#include<stdio.h>
#include<stdlib.h>
int CountEven(int Arr[] , int iLength)
{
  int i = 0 , iCnt = 0;
  for(i = 0; i < iLength; i++)
  {
    if((Arr[i] % 2) == 0) 
    {
      iCnt++;
    }
  }
  return iCnt;
}

int main()
{
  int iSize = 0 , iCnt = 0 , iRet = 0;
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
  
  iRet = CountEven(p , iSize);
  printf("Frequency is : %d\n",iRet);
  
  free(p);
  return 0;
}
