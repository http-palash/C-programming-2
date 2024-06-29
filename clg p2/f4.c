// 4.Function with arguments and a return value
#include<stdio.h>

void greatNum(int a, int b);       // function declaration

int main()
{
    int i, j, result;
    printf("Enter 2 numbers that you want to compare...\n");
    scanf("%d%d",&i,&j);
    result=greatNum(i,j); // function call
    printf("The greater number is: %d", result);
    return 0;
}

void greatNum(int x, int y)        // function definition
{
    if(x>y) 
	{
        return x;
    }
    else 
	{
        return y;
    }
}


