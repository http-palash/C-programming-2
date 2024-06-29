// Printing table of a no by passing value

#include<stdio.h>

void table(int x);
void main()
{
	int a;
	printf("Enter a no : ");
	scanf("%d",&a);
	table (a);
}
void table(int x)
{
	int i;
	for(i=1;i<=10;i++)
	{
		printf("%d*%d=%d\n",x,i,x*i);
	}
}

