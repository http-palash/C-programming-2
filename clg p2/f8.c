// 1.Function with no argument and no return value 2-D Array Multiplication of any kind of matrix  

#include<stdio.h>
void t();
int main()
{
    t();
    return 0;
}
void t()
{
	int i,j,k,m,n,p,q,a[10][10],b[10][10],c[10][10];
	printf("Enter row and column of 1st Matrix: ");
	scanf("%d",&m);
	printf("Enter row and column of 1st Matrix: ");
	scanf("%d",&n);

    printf("Enter row and column of 1st Matrix: ");
	scanf("%d",&p);
	printf("Enter row and column of 1st Matrix: ");
	scanf("%d",&q);
   	if(n==p)
	{
	    printf("Lets enter elements of First matrix.....\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				 printf("Enter the value for element a[%d][%d]=",i+1,j+1);
			     scanf("%d",&a[i][j]);
			}
		}
		printf("Lets enter elements of Second matrix.....\n");
		
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
				 printf("Enter the value for element b[%d][%d]=",i+1,j+1);
			     scanf("%d",&b[i][j]);
			}
		}
	        printf("The two matrix you have entered: ");
	   
	        printf("Matrix a=\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
			     printf("%d ",a[i][j]);
			}
			printf("\n");
		}
	    	printf("Matrix b=\n");
	    for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
		         printf("%d ",b[i][j]);
			}
			printf("\n");
		}
		
	   printf("On multiply both the matrices: \n");
		for(i=0;i<m;i++)
		{  
			for(j=0;j<q;j++)
	       {   c[i][j]=0;
		       for(k=0;k<n;k++)
		       {
		       	  c[i][j]=c[i][j]+a[i][k]*b[k][j];
			   }
			}
		}
		
			for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
			{
		         printf("%d ",c[i][j]);
			}
			printf("\n");
		}
	}
    else
    { 
 	 printf("\nMultiplication is not possible.......");
    }
}

