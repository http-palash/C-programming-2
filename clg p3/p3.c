// Pointer 3

#include<stdio.h>
#include<windows.h>
int main()
{
	int *pc,c,d;
	c=5;
	d=-15;
	
	pc=&c;
	printf("\nValue of c using pointer pc : %d\n",*pc);
	line();
	pc=&d;
	printf("\nValue of d using pointer pc : %d\n",*pc);
	line();
	printf("\nValue of c: %d\n",c);
	line();
	printf("\nValue of d: %d\n",d);
	line();
	printf("\nHence pointer variable pc can store different values of variable at same address....\n");
	return 0;
 }
void line()
{
	int i;
	for(i=0;i<50;i++)
	{
		printf("*");
	}
}

