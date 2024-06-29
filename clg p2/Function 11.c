// Printing factorial of number passing a value
#include<stdio.h>
void fact(int f);
void main()
{
	int n;
	printf("Enter a no: ");
	scanf("%d",&n);
	fact(n);
}
void fact(int f)
{
	int i,j=1;
	for(i=1;i<=f;i++)
	{
		j=j*i;
		printf("%d*",i);
	}
	printf("=%d",j);
}
