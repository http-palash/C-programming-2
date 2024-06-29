// Factorial of a number using Recursion

#include<stdio.h>
int fact(int x);        //declaring the function
void main()
{
    int a,b,i;   
    printf("Enter a number...");
    scanf("%d",&a);
    
	for(i=1;i<a;i++)
    {
    	printf("%d*",i);
	}
	b=fact(a);         //calling the function named factorial   
    printf("=%d",b); 
}
int fact(int x)       //defining the function
{
    int r ;
    if(x==0)
    { 
      return 0;
	}
    if(x==1) 
    {
	  return 1;
    }
    else 
    {
       return x*fact(x-1); //recursion, since the function calls itself
    }
}
