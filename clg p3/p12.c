// Pointer 12
// Returning multiple values through pointers without using return 

#include<stdio.h>

void add(int *x,int *y);
void sum(int *a,int *b,int *c);

int main()
{
	int *n1,*n2,*n3,check;
	
    printf("Enter 2 for passing 2 value's \nEnter 3 fir passing 3 values = \n");
    scanf("%d",&check);
    if(check==2)
    {
    	printf("Enter 1st no: ");
    	scanf("%d",&n1);
    	printf("Enter 2nd no: ");
    	scanf("%d",&n2);
    	
    	add(&n1,&n2);
    	line();
    	printf("\nOn passing through function value of \nN1=%d\nN2=%d\n",n1,n2);
    	line();
	}
	if(check==3)
	{
	   	printf("Enter 1st no: ");
    	scanf("%d",&n1);
    	printf("Enter 2nd no: ");
    	scanf("%d",&n2);
    	printf("Enter 3rd no: ");
    	scanf("%d",&n3);
    	sum(&n1,&n2,&n3);
        line(); 
    	printf("\nOn passing through function value of \nN1=%d\nN2=%d\nN3=%d\n",n1,n2,n3);
        line();
	}	
}
 void add(int *x,int *y)
 {
	*x=*x+5;
	*y=*y+10;
 }

 void sum(int *a,int *b,int *c)
 { 
	*a=*a+5;
	*b=*b+10;
	*c=*c+15;
 }
 
 void line() 
{
	int i;
	for(i=0; i<60; i++) 
	{
		printf("*");
	}
}
