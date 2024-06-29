//This program illustrates that, the register variable 
//is declared and initialized inside the main function.

#include <stdio.h>
int main()
{
 int m1 = 5;
 register int m2 = 10;
 printf("The value of m1 : %d ",m1);
 printf("\nThe value of m2 : %d ",m2);
 return 0;
}
