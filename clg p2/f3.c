// 3.Function with arguments and no return value

#include<stdio.h>

void greatNum(int a, int b);       // function declaration
int main()
{
    int i,j;
    printf("Enter 2 numbers that you want to compare...\n");
    scanf("%d%d",&i,&j);
    greatNum(i,j);        // function calling
    return 0;
}

void greatNum(int x,int y)        // function definition
{
    if(x>y) 
	{
        printf("The greater number is: %d",x);
    }
    else 
	{
        printf("The greater number is: %d",y);
    }
}

