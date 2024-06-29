#include<stdio.h>
void sum();
extern int num1=1;
extern int num2=2;
int main()
{
	int add=num1+num2;
	printf("%d\n",add);
     int num1=3;
	 int num2=4;
	{
		int add=num1+num2;
		printf("%d\n",add);
	}
	sum();
	return 0;
}
void sum()
{
	int add;
	add=num1+num2;
	printf("%d\n",add);
}

