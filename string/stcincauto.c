// Representing default or auto storage class
#include<stdio.h>
void test();
void main()
{
	{
	 auto int b ; //{Local variable}
	 printf("Value of a:%d",b);
    }
//	printf("Value of a:%d",a); // Error 1st
	test();
}
void test()
{
//	printf("Value of a:%d",a);  // Error 2nd
}
