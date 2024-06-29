#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,i,n=1;
	p=(int*)malloc(n*sizeof(int));
	p=NULL;// Assigning Address of NULL keyword in Pointer variable P
	if(p==NULL)
	{
		printf("Memory is not allocated \n\nHence addrress of NULL keyword and pointer \n");
		printf("variable Address should be same for no memory allocation condition");
		exit(0);
	}
	else
	{
		printf("Memory is allocated....\n");
		
		for(i=0;i<n;i++){
			p[i]=i+1;
		}
	}
	printf("Entered elements are....\n");
	for(i=0;i<n;i++){
		printf("%d\n",p[i]);
	}
	return 0;
}
