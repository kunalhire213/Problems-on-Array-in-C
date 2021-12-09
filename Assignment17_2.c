/*
   Accept N numbers from user and return difference between frequency of even numbers
   and odd numbers.
   
   input : 7    Elements : 85 66 3 80 93 88 90
   output :  1 (4 - 1)
*/

#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[] , int iLength)
{
  int i = 0 , iCnt1 = 0 , iCnt2 = 0;
  for(i = 0; i < iLength; i++)
  {
    if((Arr[i] % 2) == 0) 
    {
      iCnt1++;
    }
    else if((Arr[i] %2 ) >=1 )
    {
      iCnt2++;
    }
  }
  return iCnt1 - iCnt2;
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
  
  iRet = Frequency(p , iSize);
  printf("Frequency is : %d\n",iRet);
  
  free(p);
  return 0;
}
