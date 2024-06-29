// Pointer 5 Accessing value through address 

#include<stdio.h>

int main()
{
 int a,*b,**c,***d,****e;

 a=5;
 b=&a;
 c=&b;
 d=&c;
 e=&d;

 printf("To print a=%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n",a,*b,**c,***d,****e,*&a,**&b,***&c,****&d,*****&e);
 printf("To print b=%d %d %d %d %d %d %d %d %d\n",&a,b,*c,**d,***e,*&b,**&c,***&d,****&e);
 printf("To print c=%d %d %d %d %d %d\n",c,*d,**e,*&c,**&d,***&e);
 printf("To print d=%d %d %d %d\n",d,*e,**&e,*&d);
 printf("To print e=%d %d",e,*&e);
 return 0;
}
