// Addition using function Passing Parameter or argument Values 

#include<stdio.h>

void add(int x,int y);
void main()
{
	int a,b;
	printf("Enter 1st no : ");
	scanf("%d",&a);
	printf("Enter 2nd no : ");
	scanf("%d",&b);
	add(a,b);
}

void add(int x,int y)
{
	int z;
	z=x+y;
	printf("Addition z=%d",z);
	
	return 0; 
}
