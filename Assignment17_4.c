/*
   Accept N numbers from user and return frequency of 11 form it.
   
   input : 7    Elements : 85 66 3 80 93 88 90
   output :  0
   input : Elements : 85 66 11 80 11 88 111
   output : 2
*/

#include<stdio.h>
#include<stdlib.h>

 
int Check(int Arr[] , int iLength)
{
  int i = 0 , iCnt = 0;
 
  for(i = 0; i < iLength; i++)
  {
    if(Arr[i] == 11)
    {
      iCnt++;
    }
  }
  return iCnt; 
}

int main()
{
  int iSize = 0 , iCnt = 0;
  int iRet = 0;
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
  
  iRet = Check(p , iSize);
  printf("Frequency is : %d\n",iRet);
  
  free(p);
  return 0;
}
