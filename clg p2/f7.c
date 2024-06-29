// Sum of natural no using recursion

#include<stdio.h>
int sum(int x);
int main()
{
	int i,n,res;
	printf("Enter a no: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d+",i);
	}
	res=sum(n);
	printf("=%d",res);
	return 0;
}
int sum(int n)
{
	if(n!=0)
	{
		return n+sum(n-1);
	}
	else
	{
		return n;
	}
}
