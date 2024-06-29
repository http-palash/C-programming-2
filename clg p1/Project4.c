// Array 4 inserting value at any index number 

#include <stdio.h>
 int main()
{
	int a[20],i,j,n,c,v;
	
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
	printf("\nEnter at which value of a[no] want to insert new value: ");
	scanf("%d",&c);
	
	printf("\nEnter new value for a[%d]= \n",c);
	scanf("%d",&v);
    c=c-1;
  
     while(c<n)
    {
      a[n]=a[n-1];
      n--;
	}
	a[c]=v;
	for(i=0;i<j+1;i++)
	{
		printf("a[%d]=%d\n",i+1,a[i]);
	}
	return 0;
}
