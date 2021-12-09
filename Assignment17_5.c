/*
   Accept N numbers from user and accept one another number as iNo, 
   return frequency of iNo form it.
   
   input :  N - 7    Elements : 85 66 3 80 66 88 90
            iNo 66 
            
   output :  2
   
   input : N - 6 Elements : 85 66 11 80 11 88 111
           iNo 12
           
   output : 0
*/

#include<stdio.h>
#include<stdlib.h>

 
int Frequency(int Arr[] , int iLength , int iNo)
{
  int i = 0 , iCnt = 0;
 
  for(i = 0; i < iLength; i++)
  {
    if(Arr[i] == iNo)
    {
      iCnt++;
    }
  }
  return iCnt; 
}

int main()
{
  int iSize = 0 , iCnt = 0;
  int iRet = 0 , iValue = 0;
  int *p = NULL;
  
  printf("Enter Number of elements :\n");
  scanf("%d",&iSize);
  
  printf("Enter another number :\n");
  scanf("%d",&iValue);
  
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
  
  iRet = Frequency(p , iSize , iValue);
  printf("Frequency is : %d\n",iRet);
  
  free(p);
  return 0;
}
