// Printing Fabbonacci series using recursion
#include<stdio.h>
int fibbonacci(int);
int main()
{
   int n,i;
   printf("Enter a no: ");
   scanf("%d",&n);
   printf("Fibbonacci series\n");
   for (i=0;i<n;i++)
   {
      printf("%d\n",fibbonacci(i));
   }
   return 0;
}
 int fibbonacci(int n)
{
   if (n==0)
   {
      return 0;
   }
    else if (n==1)
    {
      return 1;
    }
    else
    {
       return (fibbonacci(n-1)+fibbonacci(n-2));
    }
}
