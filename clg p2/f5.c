// 5. Function within a function

#include<stdio.h>

int add(int x,int y);
int disp (int c);
int main()
{
	int a,b,c;
	printf("Enter two no : ");
	scanf("%d%d",&a,&b);
   c=add(a,b);
   printf("Addition=%d",c);
}
  int add(int x,int y)
{
	int z;
	z=x+y;
	disp (z);
}
  int disp (int c)
{
	int k;
    k=c+10;
	return k;
}
