/*
   Accept N numbers from user and return diffrence between summation of even elements and 
   summation of odd elements.
   
   input : 6    Elements : 85 66 3 80 93 88
   output : 53 (234 - 181)
*/

#include<stdio.h>
#include<stdlib.h>
int Diffrence(int Arr[] , int iLength)
{
  int i = 0 , iSum1 = 0 , iSum2 = 0;
  for(i = 0; i < iLength; i++)
  {
    if((Arr[i] % 2) == 0)
    {
      iSum1 = iSum1 + Arr[i];
    }
    else if((Arr[i] % 2) >= 1)
    {
      iSum2 = iSum2 + Arr[i];
    }
  }
  return iSum1 - iSum2;
}

int main()
{
  int iSize = 0 , iRet = 0 , iCnt = 0;
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
  
  iRet = Diffrence(p , iSize);
  printf("Result is %d\n",iRet);
  
  free(p);
  return 0;
}
