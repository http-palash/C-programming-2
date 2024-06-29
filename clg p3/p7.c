// Pointer 7
// All Arithemetic operation using pointer in 1-d array

#include<stdio.h>
int main()
{
 float a[20],*add,*sub,*mul,sum=0;
 int i,n,check=0;
 printf("Enter the size of array: ");
 scanf("%d",&n);
 
   for(i=0;i<n;i++)
   {
 	printf("Enter the value of a[%d]= ",i+1);
 	scanf("%f",&a[i]);
   }
 
 printf("Entered array a: \n");
 
    for(i=0;i<n;i++)
   {
 	printf("a[%d]=%.2f\n",i+1,a[i]);
   }

a: 
printf("\nEnter 1 for subtraction of array elements");
printf("\nEnter 2 for subtraction of array elements");
printf("\nEnter 3 for multiplication of array elements:");
   scanf("%d",&check);
     if(check==1)
   {
     for(i=0;i<n;i++)
     {
     	add=&a[i];
    	sum=sum+(*add);
      }
     printf("\nAddition of array elements: %.3f",sum);           
   }
    else if(check==2)
   {
     for(i=0;i<n;i++)
     {
     	sub=&a[i];
    	sum=sum-(*sub);
      }
     printf("\nSubtraction of array elements: %.3f",sum);
    }
    else if(check==3)
   {
   	 sum=1;
     for(i=0;i<n;i++)
     {
     	mul=&a[i];
    	sum=sum*(*mul);
      }
     printf("\nMultiplication of array elements: %.3f",sum);
   }
   else if(check!=1||2||3)
   {
     printf("\nWrong choice stupid......\n Enter correct choice>>>");
     goto a;
   }
 return 0;
}
