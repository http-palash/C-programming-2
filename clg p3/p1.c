// Pointer 1
//Printing address and values using pointer

#include <stdio.h>
#include<windows.h>

int main()
{
	int a=5,b=6,*p,*q;
	float c=1.25,*r;
	p=&a;
	q=&b;
	r=&c;
	gotoxy(18,1);
	line();
	gotoxy(20,3);
	printf("Address of integer a = %u ",&a);
	gotoxy(20,4);
	printf("Stored address of integer a in pointer variable p = %u ",p);
	gotoxy(20,6);
	printf("Value of integer a = %d ",a);
	gotoxy(20,7);
	printf("Value of integer a using pointer variable p = %d ",*p);
	gotoxy(18,9);
	line();
	gotoxy(20,11);
	printf("Address of integer b = %u ",&b);
	gotoxy(20,12);
	printf("Stored address of integer a in pointer variable q = %u ",q);
	gotoxy(20,14);
	printf("Value of integer b = %d ",b);
	gotoxy(20,15);
	printf("Value of integer a using pointer variable q = %d ",*q);
	gotoxy(18,17);
	line();
	gotoxy(20,19);
	printf("Address of float c = %u ",&c);
	gotoxy(20,20);
	printf("Stored address of float c in pointer variable r = %u ",r);
	gotoxy(20,22);
	printf("Value float c = %.3f ",c);
	gotoxy(20,23);
	printf("Value of float a using pointer variable q= %.3f \n",*r);
	gotoxy(18,25);
	line();
	return 0;
}

  void gotoxy(int a, int b) 
  {
	COORD c;

	c.X=a;
	c.Y=b;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
   }  
void line() 
{
	int i;
	for(i=0; i<60; i++) 
	{
		printf("*");
	}
}
