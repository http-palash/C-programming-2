// Addition using function returning a value

#include<stdio.h>

int add(int x,int y);
void main()
{
	int a,b,c;
	printf("Enter two no : ");
	scanf("%d%d",&a,&b);
	c=a+b;
	
	printf("Addition c=%d",c);
}

int add(int x,int y)
{
	int z;
	z=x+y;
	return z;
}
