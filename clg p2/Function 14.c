// Printing Fabbonacci series and factorial series using recursion

#include <stdio.h>
int factorial(int a);
int fabbonacci(int b);
int main() 
{
   int i,n;
   printf("Enter a no: ");
   scanf("%d",&n);
   printf("\nFactorial series of %d is: \n",n);
    for(i=1;i<=n;i++)
   {
      printf("%d*",i);            
   }	
   printf("=%d\n",factorial(n));
   printf("\nFibbonacci of %d: \n" , n);
	
	 for(i=0;i<n;i++)
   {
      printf("%d ",fibbonacci(i));            
   }
}
int factorial(int n) 
{
   if(n==0) 
   {
      return 1;
   } 
   else 
   {
      return n*factorial(n-1);
   }
}
  
  int fibbonacci(int n) 
{
   if(n==0)
   {
      return 0;
   } 
   else if(n==1) 
   {
      return 1;
   }
    else 
	{
      return (fibbonacci(n-1)+fibbonacci(n-2)); 
	
   }
}

