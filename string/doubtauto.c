// Program Representing different types of scopes

#include<stdio.h>
 void test();
  extern int a=10; // global variable declaration & intialization or program scope variable
 int main()
{

     a=20; // function scope variable
//   {  
//       a=1; // block scope variable
//     printf("Value of a as block scope variable: %d\n", a);
////	 a=a+20;// This operation belongs to block scope variable 
//     printf("New Value of a through block scope variable a=16: %d\n",a);
//	 test(); 
//   }
      //a=a+10;// This operation belongs to function scope variable 
      printf("New Value of a through function scope variable: %d\n",a);  

	  test();

	  return 0;
}

void test()
{  

 //There is no Local variable declared

 printf("Value of a in test: %d\n", a);// This operation belongs to program scope variable
	  a=a+10;
}
