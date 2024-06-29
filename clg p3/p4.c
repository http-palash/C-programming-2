// Pointer 4

#include<stdio.h>
#include<windows.h>
void l()
{
	int i;
	for(i=0;i<50;i++)
	{
		printf("*");
	}
}
int main()
{
	int *pc,c;
	l();
	printf("\nAddress of pointer pc=%u\n",pc);
	l();
	c=22;
	printf("\nAddress of c=%p \n",&c);
	printf("Value of c=%d \n",c);
	l();
	pc=&c;
	printf("\nAddress of pointer pc=%p \n",pc); 
	printf("Content of pointer pc=%d \n",*pc);
	l(); 
	c=11;
	printf("\nAddress of pointer pc after changing value =%p \n",pc);
	printf("Content of pointer pc after changing value =%d \n",*pc);
	l();
	pc=&c;
	printf("\nAddress of c after changing value of pointer variable pc=%p\n",&c);
	printf("Value of c after changing value of pointer variable pc=%d\n",*pc);
	l();
 return 0;
}
