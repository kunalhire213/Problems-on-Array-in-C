/*
   Accept N from user and accept and return the diffrence between largest
   and smallest number.
   
   input : N : 6
           elements : 15  66  3  70  93  88
           
   output : 90 (93 - 3)
*/

#include<stdio.h>
#include<stdlib.h>

int Diffrence(int Arr[] , int iLength)
{
  int i = 0 , iMin = Arr[i] , iMax = Arr[i];
  for(i = 0; i < iLength; i++)
  {
    if(Arr[i] <= iMin)
    {
      iMin = Arr[i];
    }
    else if(Arr[i] >= iMax)
    {
      iMax = Arr[i];
    }
  }
  return iMax - iMin;  
}
int main()
{
   int iSize = 0 , iRet = 0 , iCnt = 0;
   int *p = NULL;
   
   printf("Enter Number of elements : \n");
   scanf("%d",&iSize);
   
   p = (int*)malloc(sizeof(int)*iSize);
   if(p == NULL)
   {
     printf("Unable to allocate memory\n");
     return -1;
   }
   
   printf("Enter %d elements\n",iSize);
   for(iCnt = 0; iCnt < iSize; iCnt++)
   {
     printf("Enter elements : %d\n",iCnt+1);
     scanf("%d",&p[iCnt]);
   }
   
   iRet = Diffrence(p , iSize);
   printf("Diffrence is : %d\n",iRet);
   
   free(p);
   return 0;
}  
   
   
   
   
   
   
   
   
   
   

