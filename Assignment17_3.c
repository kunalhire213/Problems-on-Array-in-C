/*
   Accept N numbers from user and check wheather that numbers contains 11 in it or not.
   
   input : 7    Elements : 85 66 3 80 93 88 90
   output :  number is  not present
   input : Elements : 85 66 11 80 93 88 90
   output : number is present.
*/

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
 
BOOL Check(int Arr[] , int iLength)
{
  int i = 0;
 
  for(i = 0; i < iLength; i++)
  {
    if(Arr[i] == 11)
    {
      break;
    }
  }
  if(i == iLength)
  {
    return FALSE;
  }
  else
  {
    return TRUE;
  } 
}

int main()
{
  int iSize = 0 , iCnt = 0;
  BOOL bRet = FALSE;
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
  
  bRet = Check(p , iSize);
  if(bRet == TRUE)
  {
    printf("Number is present\n");
  }
  else
  {
    printf("Number is not present\n");
  }
  
  free(p);
  return 0;
}
