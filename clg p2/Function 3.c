// Function 3

#include<stdio.h>
int table();
void main()
{
	table();
	printf("\n");
	table();
}

int table()
{
	int i,n,t;
	printf("Enter a no: ");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
	  printf("%d*%d=%d\n",n,i,n*i);	
	}
}	
