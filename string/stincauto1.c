// Program Representing different types of scopes

#include<stdio.h>
 void test();
 int a=10; // global variable declaration & intialization or program scope variable
 void main()
{

   int a=20; // function scope variable
   {  
     int a; // block scope variable
     printf("Value of a as block scope variable: %d\n", a);
	 a=a+15;// This operation belongs to block scope variable 
     printf("New Value of a through block scope variable a=16: %d\n",a); 
   }
    printf("New Value of a through function scope variable a=20: %d\n",a);
 
      a=a+5;// This operation belongs to function scope variable 
      printf("New Value of a through function scope variable: %d\n",a);       
	  test();
}
void test()
{  

 //There is no Local variable declared
 printf("Value of a in test: %d\n", a);// This operation belongs to program scope variable
}
