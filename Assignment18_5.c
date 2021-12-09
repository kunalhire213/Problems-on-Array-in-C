/*
   Accept N from user and accept and return product of all odd elements.
   
   input : N : 6
           elements : 15  66  3  70  10  88
           
   output : 45
*/

#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[] , int iLength)
{
   int i = 0 ,  iMult = 1;
   for(i = 0; i < iLength; i++)
   {
      if((Arr[i] % 2) >= 1)
      {
        iMult = iMult * Arr[i];
      }
   }
   if(iMult == 1)
   {
     return 0;
   }
   return iMult; 
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
   
   iRet = Product(p , iSize);
   printf("Product is : %d\n",iRet);
   
   free(p);
   return 0;
}  
   
   
   
   
   
   
   
   
   
   

