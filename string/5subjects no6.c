#include<stdio.h>

int main()
{
	float total,percentage,s1,s2,s3,s4,s5;

	printf("Enter marks of 1st subject:  ");
	scanf("%f",&s1);
	
	printf("Enter marks of 2nd subject:  ");
	scanf("%f",&s2);
	
	
	printf("Enter marks of 3rd subject:  ");
	scanf("%f",&s3);
	
	
	printf("Enter marks of 4th subject:  ");
	scanf("%f",&s4);
	
	
	printf("Enter marks of 5th subject:  ");
	scanf("%f",&s5);
    
    total=s1+s2+s3+s4+s5;
    percentage=total/5;
     
 if(percentage>=60)
 { 
  printf("\nDivision=1st");
 }
  else
  { 
    if(percentage>=45)
     {
	   printf("\nDivision=2nd");
     }
     else
     {
	     if(percentage>=33)
        {
	     printf("\nDivision=3rd");
        }
        else
         {
          printf("\nFail");
         }
     }
   }
    
	printf("\nTOtal Marks: %.2f \n Percentage: %.2f \n",total,percentage);
	return 0;
}
