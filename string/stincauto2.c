// Representing auto storage class
#include<stdio.h>
void test();
//auto int a; // auto variable cannot be declared as global variable this will show error
void main()
{
	auto int a=10;//Method scope
	{
	 auto int a;//Block scope
	 printf("Value of a:%d\n",a); // Garbage value
    }
	printf("Value of a:%d",a); // This will give value of method scope variable
}
