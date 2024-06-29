// 1. Function with no arguments and no return value

#include<stdio.h>

 int main()
{

    greatNo();  
    printf("\n");
	greatNo();      // function call
    void greatNo();       // function declaration
    return 0;
}
void greatNo()        // function definition
{
    int a,b;
    printf("Enter 2 numbers that you want to compare...\n");
    scanf("%d%d",&a,&b);
    if(a>b) 
	{
        printf("The greater number is: %d",a);
    }
    else 
	{	
        printf("The greater number is: %d",b);
    }
}




