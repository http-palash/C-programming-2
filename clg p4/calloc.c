#include <stdio.h>
#include <stdlib.h>
  
int main()
{
    int  *p;
    int  i,n;
     // To Get the number of elements for the array
    printf("Enter no of element's you want to enter in array: ");
    scanf("%d",&n);
    printf("Enter %d number of elements:\n", n);

    // Dynamically allocate memory using calloc()
    p = (int*)calloc(n, sizeof(int));
 
    // Checking memory is allocated by calloc or not
       if (p==NULL) 
	   {
        printf("Memory not allocated.\n");
        exit(0);
       }
    else 
	{
        printf("\nMemory successfully allocated using calloc.\n");
  
        for (i=0;i<n;i++) 
		{
            printf("Enter value for a[%d]= ",i);
            scanf("%d",&p[i]);
        }
        printf("\nThe elements of the array are: \n");
        for (i=0;i<n;i++) 
		{
            printf("a[%d]=%d\n",i,p[i]);
        }
    }
  
    return 0;
}
