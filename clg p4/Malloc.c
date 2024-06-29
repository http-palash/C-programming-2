#include <stdio.h>
#include <stdlib.h>
int main()
{
    // This pointer will hold the
    // base address of the block created
    int  *p;
    int   i,n;
    
	// To Get the number of elements for the array
    printf("Enter no of element's you want to enter in array: ");
    scanf("%d",&n);
    printf("Enter %d number of elements\n",n);


    // Dynamically allocate memory using malloc()
    // Syntax: ptr=(cast-type*) malloc(byte-size)
	p=(int*)malloc(n*sizeof(int));
    // Check if the memory has been successfully
    // allocated by malloc or not
    if (p==NULL)
   {
        printf("\nMemory not allocated.\n");
        exit(0);
    }
    else
	{
        printf("\nMemory successfully allocated using malloc.\n");
        // To Get the elements of the array
        for (i=0;i<n;i++)
		{
		   printf("Enter value for element a[%d]= ",i);
		   scanf("%d",&p[i]);
        }
        // Print the elements of the array
        printf("\nThe elements of the array are: ");
        for (i = 0; i < n; ++i)
		{
            printf("\na[%d]=%d",i,p[i]);
        }
    }
    return 0;
}
