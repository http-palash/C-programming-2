// Pointer 2

#include <stdio.h>
#include<windows.h>

int main() 
{ 
  int a=5,*p;
  p=&a;
  a=10-50;
  gotoxy(18,1); 
line(); 
   gotoxy(20,2);
     printf("Value of integer a = %d ",a);
   gotoxy(20,3);
     printf("Value of integer a using pointer variable p has also changed = %d ",*p);
gotoxy(18,4);
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
  	
  	for(i=0;i<60;i++)
  	{
  		printf("*");
	}
  }
