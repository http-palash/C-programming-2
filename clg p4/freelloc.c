#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *pa, *pb,i,n;
    // Get the number of elements for the array
    printf("Enter no of element's you want to enter in array: ");
    scanf("%d",&n);
    // Dynamically allocate memory using malloc()
    pa = (int*)malloc(n * sizeof(int));
    // Dynamically allocate memory using calloc()
    pb = (int*)calloc(n, sizeof(int));
    // Check memory has been successfully allocated or not
    if (pa == NULL || pb == NULL)
        {
          printf("Memory not allocated.\n");
          exit(0);
        }
    else
    {
        // Memory has been successfully allocated
        printf("Memory successfully allocated using malloc.\n");
        // Free the memory
        free(pa);
        printf("Malloc Memory successfully free\n");
        // Memory has been successfully allocated
        printf("\nMemory successfully allocated using calloc.\n");
        // Free the memory
        free(pb);
        printf("Calloc Memory successfully free\n");
    }
    return 0;
}
