// Call by value

#include <stdio.h>
void swap(int p,int r);
 int main()
{
	int a=30,b=20;
	swap(a,b);
	printf("\n\nAfter swapping value in main function: a=%d,b=%d",a,b);
	printf("\n\n<<<Hence value of a and b remains same bcoz of call by value method>>>>\n\n");
	return 0;
}
void swap (int x,int y)
{    
    int c;
	printf("\n\nValues passed in function: x=%d,y=%d",x,y);
    	c=x; 	x=y;  	y=c;	
	printf("\n\nAfter swapping in user defined swap function: x=%d,y=%d",x,y);
}
