/*
   Accept N from user and accept and accept one another numbers as iNo ,
   return index of last occurance of that iNo.
   
   input : N - 6  iNo - 66    
           elements : 85 66 3 66 93 88
           
   output : 3
   
   input : N - 6 iNo 12
           elements : 85 66 3 66 93 88
           
   output : -1
*/

#include<stdio.h>
#include<stdlib.h>

int FirstOccurance(int Arr[] , int iLength , int iNo)
{
  int i = 0 , index = -1;
  for(i = 0; i < iLength; i++)
  {
   if(Arr[i] == iNo)
   {
     index = i;
   }
  }
  return index;
}
int main()
{
   int iSize = 0 , iValue = 0 , iCnt = 0;
   int iRet = 0;
   int *p = NULL;
   
   printf("Enter Number of elements : \n");
   scanf("%d",&iSize);
   printf("Enter Number : \n");
   scanf("%d",&iValue);
   
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
   
   iRet = FirstOccurance(p , iSize , iValue);
   if(iRet == -1)
   {
     printf("Number is not present\n");
   }
   else
   {
     printf("First occurance of number is : %d\n",iRet);
   }
   
   free(p);
   return 0;
}  
   
   
   
   
   
   
   
   
   
   

