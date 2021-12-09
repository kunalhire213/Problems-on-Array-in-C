 /*
   Accept N from user and accept and display all such a numbers which contains 3
   digits in it.
   
   input : N : 6
           elements : 1553  666  3  70  953  885
           
   output : 666  953  885
*/

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[] , int iLength)
{
  int i = 0 , iDigit = 0;
  for(i = 0; i < iLength; i++)
  {
    int iCnt = 0 , index = Arr[i];
    while(Arr[i] != 0)
    {
      iDigit = Arr[i] % 10;
      iCnt++;
      Arr[i] = Arr[i] / 10;
    }
    if(iCnt == 3)
    {
      printf("%d\t",index);
    }  
  }
  printf("\n");
}
int main()
{
   int iSize = 0 ,  iCnt = 0;
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
   
   Digits(p , iSize);

   
   free(p);
   return 0;
}  
   
   
   
   
   
   
   
   
   
   

