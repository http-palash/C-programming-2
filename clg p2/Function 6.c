// Function 6 Simple interest 

#include<stdio.h>
void si();
void main()
{
	si();
	printf("\n\n");
	si();
}
void si()
{
	float si,p,r,t;
	printf("Enter Principal: ");
	scanf("%f",&p);
	printf("Enter rate: ");
	scanf("%f",&r);
	printf("Enter time: ");
	scanf("%f",&t);

 si=p*r*t/100;
 printf("Simple interest:%.3f",si);
 
}
