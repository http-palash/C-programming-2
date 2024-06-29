#include <stdio.h>

int main()
{
	int n,cube,sum=0,rem,m;
	
	printf("Enter a no : ");
	scanf("%d",&n);
     m=n;
	while(n>0)
     	{   
	     rem=n%10;
	     cube=rem*rem*rem;
	     sum=sum+cube;
		 n=n/10;
    	}

	if(sum==m)
	{
	printf("%d is armstrong no",m);
    }
	else
	 printf("%d is not a armstrong no",m);
	
	return 0;
}
