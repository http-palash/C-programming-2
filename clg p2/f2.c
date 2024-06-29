// 2. Function with no arguments and a return value
 #include<stdio.h>
int greatNo();       // function declaration
int main()
{
    int result;
    result=greatNo();        // function call
    printf("The greater number is: %d",result);
    return 0;
}

int greatNo()        // function definition
{
    int i,j,k;
    printf("Enter 2 numbers that you want to compare...\n");
    scanf("%d%d",&i,&j);
    if(i>j) 
	{
        k=i;
    }
    else
	{
       k=j;
    }
    // returning the result
    return k;
}


