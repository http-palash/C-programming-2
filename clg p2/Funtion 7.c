// Funtion 7

#include <stdio.h>
void AR();
void main()
{
	AR();
	printf("\n");
	AR();
}

void AR()
{
	float a,b;
	
	printf("Enter First no: ");
	scanf("%f",&a);
    printf("Enter Second no: ");
	scanf("%f",&b);
  
    printf("\n Addition=%.2f \n Subtraction=%.2f \n Multiplication=%.2f \n Division=%.2f \n",a+b,a-b,a*b,a/b);

   return 0;
}
