// Array 3  inserting value in last of array 

#include <stdio.h>
 int main()
{
	int a[20],i,n,c;
	
	printf("Enter the size of array: ");
	scanf("%d",&n);

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
	printf("\nEnter new Value to insert at last of array: ");
	scanf("%d",&c);
    a[n]=c;
	
	for(i=0;i<n+1;i++)
	{
		printf("a[%d]=%d\n",i+1,a[i]);
	}
	return 0;
}
