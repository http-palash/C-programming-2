#include<stdio.h>
#include<stdlib.h>
void mallocint();
void mallocfloat();
void callocint();
void callocfloat();

void mallocint()
{
    int  *p,i,n;

    printf("Enter no of element's you want to enter in array: ");
    scanf("%d",&n);
    printf("Enter %d number of elements\n",n);

	p=(int*)malloc(n*sizeof(int));

    if (p==NULL)
   {
        printf("\nMemory not allocated.\n");
        exit(0);
    }
    else
	{
        printf("\nMemory successfully allocated using malloc.\n");
        for (i=0;i<n;i++)
		{
		   printf("Enter value for element a[%d]= ",i);
		   scanf("%d",&p[i]);
        }
        printf("\nThe elements of the array are: ");
        for (i = 0; i < n; ++i)
		{
            printf("\na[%d]=%d",i,p[i]);
        }
    }
}


int main() 
{
	// This pointer will hold the
    // base address of the block created
    int  *p;
    int   i,n,check;
    
    printf("Enter 1 to allocate dynamic memory in integer type");
	printf("\nEnter 2 to allocate contigious memory in integer type");
    printf("Enter 3 to allocate dynamic memory in float type");
	printf("\nEnter 4 to allocate contigious memory in float type");
    scanf("%d",&check);
	
	rev: switch(check)
	{
		case 1: mallocint(); 
		break;
		case 2: mallocfloat();
		break;
		case 3: callocint();
		break;
		case 4: callocfloat();
		break;
		default: printf("Wrong choice stupid"); goto rev;
	}
    
	// To Get the number of elements for the array
    printf("Enter no of element's you want to enter in array: ");
    scanf("%d",&n);
    printf("Enter %d number of elements\n",n);
    
	return 0;
}
