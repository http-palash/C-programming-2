// Function 4

#include<stdio.h>
int even();
void main()
{
	even();
	printf("\n");
	even();
}
int even()
{
	int n;
	printf("Enter a no:");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("%d is even no",n);
	}
	else
	{
		printf("%d is odd no",n);
	}
	return(0);
}
