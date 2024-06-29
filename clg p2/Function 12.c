// Printing factorial of number returning a value

#include<stdio.h>
int fact(int f);
void main()
{
	int n,f;
	printf("Enter a no: ");
	scanf("%d",&n);
	f=fact(n);
}
int fact(int f)
{
	int i,j=1,z;
	for(i=1;i<=f;i++)
	{
		j=j*i;
		printf("%d*",i);
	}
	printf("=%d",j);
	return z;
}
