// Function 5

#include<stdio.h>
void odd();
void main()
{
	odd();
	printf("\n\n");
	odd();
}
void odd()
{
	int n;
    printf("Enter a no: ");
   	 scanf("%d",&n);
    if(n%2!=0)
	{
		printf("%d is odd number",n);
	}
	else
	{
		printf("%d is even number",n);
	}
	
}
