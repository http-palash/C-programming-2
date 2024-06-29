// Clg Assinment 1st 1d array

#include <stdio.h>
 int main()
{
	int a[20],v,i,j,n,c,s,m;
	
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
    
a1:printf("\nEnter 1 to insert a new value in begining of array \nEnter 2 to insert new Value in last of array");
   printf("\nEnter 3 to insert a new value in array by your choice \nEnter 4 to delete and insert new value in array");
   printf("\nEnter 5 to delete value from begining of array \nEnter 6 to delete last value in array");
   printf("\nEnter 7 to search element in array \nEnter your choice: ");
    scanf("%d",&m);
	switch(m)
 {
	// 1st to insert a new value in begining of array
    case 1: printf("\nEnter new Value to insert in begining of array: ");
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
	break;
	// 2nd to insert new Value in last of array
	
	   case 2:
	    printf("\nEnter new Value to insert at last of array: ");
		scanf("%d",&c);
       a[n]=c;
	
    	for(i=0;i<n+1;i++)                                                                                                                                                                                                                                        	{
		printf("a[%d]=%d\n",i+1,a[i]);
	}
	// 3rd to insert a new value in array by your choice 
	break;
          case 3:	printf("\nEnter at which value of a[no] want to insert new value: ");
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
	break;
	// 4th to enter value which we want to delete
	     case 4:	printf("\nEnter at which value of a[no] want to delete: ");
	     scanf("%d",&c);
	     c=c-1;
	printf("\nEnter new value for a[%d]= \n",c+1);
	scanf("%d",&v);
	a[c]=v;
	for(i=0;i<j;i++)
	{
		printf("a[%d]=%d\n",i+1,a[i]);
	}
	break;

	// 5 to delete value from begining of array 
	
	case 5: printf("On deleting value from begining of array : \n");
	  
	  for(i=1;i<n;i++)
	  {
	  	printf("%d\n",a[i]);
	  }
	  break;

	// 6 to delete last value of array 
	
	case 6: printf("On deleting last value of array : \n");
	  
	  for(i=0;i<n-1;i++)
	  {
	  	printf("%d\n",a[i]);
	  }
      break;
      
	// 7 To search element is present or not
	case 7:  printf("Enter value which you want to search:");
	         scanf("%d",&v);
	 
	 int count=0;        
	for(i=0;i<n;i++)
	{
		if(v==a[i])
		{
		 count++;
        }
	}
	if(count==0)
	{
		printf("%d is not present in this array",v);
	}
	if(count>0)
	{
		printf("%d is present in this array %d times",v,count);
	}
	break;         
	default: printf("\nPlease enter valid choice (no):\n");
	goto a1;
 }
	return 0;
}
