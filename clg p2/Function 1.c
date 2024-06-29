// Addition program using function with no arguments and no return value

#include<stdio.h>
// Function declaration
void add ();
void main ()
{
// Function calling	
	add();
	printf("\n\n");
	add();
}

// Function defination
 
void add ()
{
	int a,b,c;
	printf("Enter value of a: ");
	scanf("%d",&a);
	printf("Enter value of b: ");
	scanf("%d",&b);
	c=a+b;
	printf("Sum of these two number is:%d ",c);

}
