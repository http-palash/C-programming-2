// Pointer 11
// Printing values and address addition subtraction multiplication of array elements using pointer increament.....
#include<stdio.h>
int main()
{
	int a[50],check=0,flag=0;
	int *p,i,n;

    main:   printf("Enter size of array: ");
      	    scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter the value of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\nEntered array: \n");
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
    
	 p=&a[0];
    
	 a:   printf("\nEnter 1 to check address distribution in array \nEnter 2 to print values of array elements");
          printf("\nEnter 3 to find sum of array elements \nEnter 4 to find subtraction of array elements");
		  printf("\nEnter 5 to find multiplication of array elements:");
     
          scanf("%d",&check);
   
   if(check==1)
   {
	    for(i=0;i<n;i++)
	   {
		 printf("Address of a[%d]=%u\n",i,p);
		 p++;
    	}
     
	   printf("\nEnter 0 to terminate program \nEnter 1 to continue:\n");
       scanf("%d",&flag);
       if(flag==0)
       {
     	exit(0);
	   }
	   if(flag==1)
	   {
	   	goto main;
	   }
   } 
   
   if(check==2)
   {
		for(i=0;i<n;i++)
    	{
		 printf("Value of a[%d]=%u\n",i,*p);
		 p++;
	    }
	   printf("\nEnter 0 to terminate program \nEnter 1 to continue:\n");
       scanf("%d",&flag);
       if(flag==0)
       {
     	exit(0);
	   }
	   if(flag==1)
	   {
	   	goto main;
	   }
    }
    
    if(check==3)
    {
   	    int sum=0;
		for(i=0;i<n;i++)
    	{
		 sum=sum+(*p);
		 p++;
	    }
	    printf("\nSum of array elements is = %d\n",sum);
	    	   
		printf("\nEnter 0 to terminate program \nEnter 1 to continue:\n");
        scanf("%d",&flag);
       if(flag==0)
       {
     	exit(0);
	   }
	   if(flag==1)
	   {
	   	goto main;
	   }
    }
    
    if(check==4)
   {
   	     int sum=0;
		for(i=0;i<n;i++)
    	{
		 sum=sum-(*p);
		 p++;
	    }
	    printf("\nSubtraction of array elements is = %d\n",sum);
	   
	   printf("\nEnter 0 to terminate program \nEnter 1 to continue:\n");
       scanf("%d",&flag);
       if(flag==0)
       {
     	exit(0);
	   }
	   if(flag==1)
	   {
	   	goto main;
	   }
    }
       
    if(check==5)
   {
   	     int sum=1;
		for(i=0;i<n;i++)
    	{
		 sum=sum*(*p);
		 p++;
	    }
	    printf("\nMultiplication of array elements is = %d\n",sum);
	   
	   printf("\nEnter 0 to terminate program \nEnter 1 to continue:\n");
       scanf("%d",&flag);
       if(flag==0)
       {
     	exit(0);
	   }
	   if(flag==1)
	   {
	   	goto main;
	   }
    }
    else
    {
    	printf("\nWrong choice stupid....\n");
    	goto a;
	}
	return 0;	
}
