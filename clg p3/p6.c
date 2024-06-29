// Pointer 6

// All Arithemetic operation using pointer

#include<stdio.h>

int main()
{
 float a,b,c,*p,*q;
 
 printf("Enter value of a : ");
 scanf("%f",&a);
 printf("Enter value of b : ");
 scanf("%f",&b); 
 p=&a;
 q=&b;

 printf("On Addition through pointer we get=%.3f",c=*p+*q);
 printf("\nOn Subtraction through pointer we get=%.3f",c=*p-*q);
 printf("\nOn Multiplication through pointer we get=%.3f",c=(*p)*(*q));
 printf("\nOn Division through pointer we get=%.3f",c=(*p)/(*q));
 return 0;
}
