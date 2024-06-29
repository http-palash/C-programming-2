// Clg Assignment 1st 2-d array 

#include<stdio.h>

int main()
{
	 int a;
	 int arr[3][3],arr1[3][3],arr2[3][3],arr3[3][3],i,j,k,s,count=0,sum=0;
    a1:	printf("Enter 1 to search element in matrix \nEnter 2 to find transpose of matrix \nEnter 3 to find diagonal of matrix");
	printf("\nEnter 4 to find sum of diagonal of matrix \nEnter 5 to find sum of diagonal of two matrix");
	printf("\nEnter 6 to find sum of matrix \nEnter 7 to print subtraction of matrix \nEnter 8 to multiply matrix\n");
	printf("Enter your choice: ");
    scanf("%d",&a);
    
    switch(a)    
  {
	
	// 1 To search element in matrix
    case 1: 
  
	for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		printf("Enter value of a[%d][%d]= ",i+1,j+1);
    		scanf("%d",&arr[i][j]);
		}
	}
	printf("\nEntered matrix:\n");
	   for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	printf("\nEnter value to search in given matrix : ");
	scanf("%d",&s);
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(s==arr[i][j])
			{
				count++;
			}
		}
	}
	 if(count==0)
	{
		printf("%d is not present in this matrix",s);
	}
     	 else
	     {
		   printf("\n%d is present in this matrix %d times",s,count);
		   }
	       break;
		   
// 2 To transpose matrix
	
	 case 2: 
	 for(i=0;i<3;i++)
     {
    	for(j=0;j<3;j++)
    	{
    		printf("Enter value of a[%d][%d]= ",i+1,j+1);
    		scanf("%d",&arr[i][j]);
		}
	 }
	 printf("\nEntered matrix:\n");
	for(i=0;i<3;i++)
     {
    	for(j=0;j<3;j++)
    	{
    		printf("%d ",arr[i][j]);
		}
		printf("\n");
	 }
	
	printf("Transpose of matrix is: \n");
	
	for(i=0;i<3;i++)
     {
    	for(j=0;j<3;j++)
    	{
    		printf("%d ",arr[j][i]);
		}
		printf("\n");
	 }
	break;
// 3 To print diagonal of matrix
	 
	 case 3: 
	 for(i=0;i<3;i++)
     {
    	for(j=0;j<3;j++)
    	{
    		printf("Enter value of a[%d][%d]= ",i+1,j+1);
    		scanf("%d",&arr[i][j]);
		}
	 }
	 printf("\nEntered matrix:\n");
	for(i=0;i<3;i++)
     {
    	for(j=0;j<3;j++)
    	{
    		printf("%d ",arr[i][j]);
		}
		printf("\n");
	 }
	
	printf("Diagonal of matrix is: \n");
	
	for(i=0;i<3;i++)
     {
    	for(j=0;j<3;j++)  
    	{  
    	    if(i==j)
    	    {
    		  printf("%d ",arr[i][j]);
    		  count++;
            }
		}
		printf("\n");
		if(count==1)
		{
			printf("\t");
		}
		if (count==2)
		printf("\t\t");
	 }
	 break;
	 
// 4 To print sum of diagonal of matrix
	 
	 case 4: 
	 for(i=0;i<3;i++)
     {
    	for(j=0;j<3;j++)
    	{
    		printf("Enter value of a[%d][%d]= ",i+1,j+1);
    		scanf("%d",&arr[i][j]);
		}
	 }
	 printf("\nEntered matrix:\n");
	for(i=0;i<3;i++)
     {
    	for(j=0;j<3;j++)
    	{
    		printf("%d ",arr[i][j]);
		}
		printf("\n");
	 }
	
	printf("Diagonal of matrix is: \n");
	
	for(i=0;i<3;i++)
     {
    	for(j=0;j<3;j++)  
    	{  
    	    if(i==j)
    	    {
    		  printf("%d ",arr[i][j]);
    		  count++;
    		  sum=sum+arr[i][j];
            }
		}
		printf("\n");
		if(count==1)
		{
			printf("\t");
		}
		if (count==2)
		printf("\t\t");
	 }
	 printf("\nSum of this diagonal is:%d",sum);
	 break;
	 
// 5 To print sum of diagonal of two matrices 
	 
	 case 5: 
	 // To enter values in 1st matrix
	 for(i=0;i<3;i++)
     {
    	for(j=0;j<3;j++)
    	{
    		printf("Enter value of a[%d][%d]= ",i+1,j+1);
    		scanf("%d",&arr1[i][j]);
		}
	 }
	 // To enter values in 2nd matrix
	 for(i=0;i<3;i++)
     {
    	for(j=0;j<3;j++)
    	{
    		printf("Enter value of b[%d][%d]= ",i+1,j+1);
    		scanf("%d",&arr2[i][j]);
		}
	 }
	 printf("\nEntered matrix a:\n");
	for(i=0;i<3;i++)
     {
    	for(j=0;j<3;j++)
    	{
    		printf("%d ",arr1[i][j]);
		}
		printf("\n");
	 }
	  printf("\nEntered matrix b:\n");
	for(i=0;i<3;i++)
     {
    	for(j=0;j<3;j++)
    	{
    		printf("%d ",arr2[i][j]);
		}
		printf("\n");
	 }
	
	 printf("\nDiagonal of matrix a is: \n");
	
    	for(i=0;i<3;i++)
      {
    	for(j=0;j<3;j++)  
    	{  
    	    if(i==j)
    	    {
    		  printf("%d ",arr1[i][j]);
    		  count++;
            }
		}
		printf("\n");
		if(count==1)
		{
			printf("\t");
		}
		if (count==2)
		printf("\t\t");
	 }
	
	printf("\nDiagonal of matrix b is: \n");
	    count=0;
	    for(i=0;i<3;i++)
       {
    	   for(j=0;j<3;j++)  
    	   {  
    	      if(i==j)
    	      {
    		    printf("%d ",arr2[i][j]);
    		    count++;
              }
		   }
		   printf("\n");
	        if(count==1)
		    {
		    	printf("\t");
	    	}
		    if (count==2)
        	printf("\t\t");
	   }
	 printf("\nSum of both diagonal's is:");
	 	for(i=0;i<3;i++)
       {
        	for(j=0;j<3;j++)  
        	{  
    	      if(i==j)
    	      {	   
			    sum=sum+arr1[i][j]+arr2[i][j];
    	    	printf("[%d]+[%d]",arr1[i][j],arr2[i][j]);
    	        printf("+");
              }
		    }
	   }  
	 	 printf("=%d",sum);
	
	break;
	 	 
// 6 To find sum of matrix
      
	case 6:
	// To take values for matrix 1st   
	 for(i=0;i<3;i++)
     {
	  for(j=0;j<3;j++)
	   {
		 printf("Enter value for a[%d][%d]= ",i+1,j+1);
	     scanf("%d",&arr1[i][j]);
       }
     }
    // To take values for matrix 2nd  
     for(i=0;i<3;i++)
     {
	   for(j=0;j<3;j++)
	   {
		 printf("Enter value for b[%d][%d]= ",i+1,j+1);
	     scanf("%d",&arr2[i][j]);
       }
     }
     // To print entered matrix
     printf("\nEntered Matrix a:\n");
      
	 for(i=0;i<3;i++)
     {
	    for(j=0;j<3;j++)
	    {
	      printf("%d  ",arr1[i][j]);
	    }
	     printf("\n");
     }
     printf("\nEntered matrix b:\n");
        for(i=0;i<3;i++)
      {
	    for(j=0;j<3;j++)
	  {
		printf("%d ",arr2[i][j]);
	  }
	    printf("\n");
     }
     printf("\nSum of these both matrices:\n");
     // To add both matrices
	 for(i=0;i<3;i++)
     {
     	 for(j=0;j<3;j++)
     	 {
     		arr3[i][j]=arr1[i][j]+arr2[i][j];
     		printf("%d  ",arr3[i][j]);
		 }
		 printf("\n");
	 }
	 break;
    
	// 7 To find subtraction of matrix  
	
	case 7:
		
	// To take values for matrix 1st   
	 for(i=0;i<3;i++)
     {
	  for(j=0;j<3;j++)
	   {
		 printf("Enter value for a[%d][%d]= ",i+1,j+1);
	     scanf("%d",&arr1[i][j]);
       }
     }
    // To take values for matrix 2nd  
     for(i=0;i<3;i++)
     {
	   for(j=0;j<3;j++)
	   {
		 printf("Enter value for b[%d][%d]= ",i+1,j+1);
	     scanf("%d",&arr2[i][j]);
       }
     }
     // To print entered matrix
     printf("\nEntered Matrix a:\n");
     
	 for(i=0;i<3;i++)
     {
	    for(j=0;j<3;j++)
	    {
	      printf("%d ",arr1[i][j]);
	    }
	     printf("\n");
     }
     printf("Entered Matrix b:\n");
        for(i=0;i<3;i++)
      {
	    for(j=0;j<3;j++)
	  {
		printf("%d ",arr2[i][j]);
	  }
	    printf("\n");
     }
     printf("Subtraction of these both matrices:\n");
     // To Subtract both matrices
	 for(i=0;i<3;i++)
     {
     	 for(j=0;j<3;j++)
     	 {
     		arr3[i][j]=arr1[i][j]-arr2[i][j];
     		printf("%d  ",arr3[i][j]);
		 }
		 printf("\n");
	 }
	 break;
// 8 To multiply both the matrices
	
	case 8:
	// To take values for matrix 1st   
	 for(i=0;i<3;i++)
     {
	  for(j=0;j<3;j++)
	   {
		 printf("Enter value for a[%d][%d]= ",i+1,j+1);
	     scanf("%d",&arr1[i][j]);
       }
     }
    // To take values for matrix 2nd  
     for(i=0;i<3;i++)
     {
	   for(j=0;j<3;j++)
	   {
		 printf("Enter value for b[%d][%d]= ",i+1,j+1);
	     scanf("%d",&arr2[i][j]);
       }
     }
     // To print entered matrix
     printf("\nEntered Matrix a:\n");
     
	 for(i=0;i<3;i++)
     {
	    for(j=0;j<3;j++)
	    {
	      printf("%d ",arr1[i][j]);
	    }
	     printf("\n");
     }
     printf("Entered Matrix b:\n");
        for(i=0;i<3;i++)
      {
	    for(j=0;j<3;j++)
	  {
		printf("%d ",arr2[i][j]);
	  }
	    printf("\n");
     }
     printf("\nMultiplication of these both matrices:\n");
     //  To multiply 
	for(i=0;i<3;i++)
	{
        for(j=0;j<3;j++)
      	{ 
      	  arr3[i][j]=0;
      	  for(k=0;k<3;k++)
      	  {
            arr3[i][j]=arr3[i][j]+arr1[i][k]*arr2[k][j];
          }
		}
	}
	printf("\nOn Multiplying both Matrices:\n");
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d  ",arr3[i][j]);
		}
		printf("\n");
	}

	break;
	default: printf("\nEnter correct choice\n\n");
	        goto a1;
  }
	return 0;
}

