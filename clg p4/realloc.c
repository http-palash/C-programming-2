#include <stdio.h>
#include <stdlib.h>
int main()
{
  
    int *ptr,i,old,new;
  
    // Get the number of elements for the array
    printf("Enter no of element's you want to enter in array: ");
    scanf("%d",&old);
    printf("Enter number of elements: %d\n",old);
    // Dynamically allocate memory using calloc()
    ptr = (int*)calloc(old,sizeof(int));
    // Check if the memory has been successfully
    // allocated by malloc or not
    if (ptr==NULL) 
	{
        printf("Memory not allocated.\n");
        exit(0);
    }
    else {
  
        // Memory has been successfully allocated
        printf("Memory successfully allocated using calloc.\n");
  
        // Get the elements of the array
        for (i=0; i<old;i++) 
		{
            printf("Enter value for a[%d]= ",i+1);
            scanf("%d",&ptr[i]);
        }
  
        // Print the elements of the array
        printf("\nThe elements of the array are: \n");
        for (i =0; i<old;i++) 
		{
            printf("a[%d]=%d\n",i+1, ptr[i]);
        }
  
        // Get the new size for the array
        printf("Enter new size for more elements: ");
        scanf("%d",&new);
        printf("\n\nEntered new size of the array is: %d\n",new);
  
        // Dynamically re-allocate memory using realloc()
        ptr = realloc(ptr, new*sizeof(int));
        // Memory has been successfully allocated
        printf("Memory successfully re-allocated using realloc.\n");
        // Get the new elements of the array
        for (i=old; i<new;i++) 
		{
           printf("Enter value for a[%d]= ",i+1);
           scanf("%d",&ptr[i]);;
        }
  
        // Print the elements of the array
        printf("The %d elements of the array are: \n",new);
        for (i=0;i<new;i++)
		{
            printf("a[%d]=%d\n",i+1,ptr[i]);
        }
  
        free(ptr);
    }
  
    return 0;
}
