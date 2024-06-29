// Pointer 10

// Printer values and address array using pointer

#include<stdio.h>
int main()
{
	int a[6]={3,4,5,6,7,8};
	int *p,i;
	
	for(i=0;i<6;i++)
	{
		p=&a[i];
		printf("Address of a[%d]=%u\n",i,p);
	}
	printf("\n");
	
	for(i=0;i<6;i++)
	{
		p=&a[i];
		printf("Address of a[%d]=%u\n",i,*p);
	}
	return 0;	
}
