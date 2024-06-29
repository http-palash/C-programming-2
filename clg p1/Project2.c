// Array 2 inserting value in begining of array 
#include <stdio.h>
 int main()
{
	int a[20],i,j,n,c,s;
	
	printf("Enter the size of array: ");
	scanf("%d",&n);
	j=n;
	for(i=0;i<n;i++)
	{
	  printf("Enter the value of a[%d]: ",i+1);
      scanf("%d",&a[i]);
	}	
	printf("\nThis is what you entered: \n");
	for(i=0;i<n;i++)
	{
		printf("value of a[%d]=%d\n",i+1,a[i]);
    }
	printf("\nEnter new Value to insert in begining of array: ");
	scanf("%d",&c);
     while(n>=0)
    {
      a[n+1]=a[n];
      n--;
	}
    a[0]=c;
	for(i=0;i<j+1;i++)
	{
		printf("a[%d]=%d\n",i+1,a[i]);
	}
	return 0;
}
