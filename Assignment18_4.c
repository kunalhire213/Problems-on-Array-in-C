/*
   Accept N from user and accept and accept Range, Display all elements from 
   that Range.
   
   input : N : 6
           start : 60
           end : 90
           
           elements : 85  66  3  76  93  88
           
   output : 66  76  88
*/

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[] , int iLength , int iStart , int iEnd)
{
   int i = 0;
   for(i = 0; i < iLength; i++)
   {
    if((Arr[i] > iStart) && (Arr[i] < iEnd))
    {
      printf("%d\t",Arr[i]);
    }
   } 
   printf("\n");
}
int main()
{
   int iSize = 0 , iValue1 = 0 , iValue2 = 0 , iCnt = 0;
   int *p = NULL;
   
   printf("Enter Number of elements : \n");
   scanf("%d",&iSize);
   printf("Enter Starting Point : \n");
   scanf("%d",&iValue1);
   printf("Enter Ending Point : \n");
   scanf("%d",&iValue2);
   
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
   
   Range(p , iSize , iValue1 , iValue2);
   
   
   free(p);
   return 0;
}  
   
   
   
   
   
   
   
   
   
   

