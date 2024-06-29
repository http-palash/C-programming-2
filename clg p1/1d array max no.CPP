// Sorting of array sequential

#include<stdio.h>

int  main()
{
 int i,max=0;
 int a[10];
 
 // To declare size of array
 printf("Declare size of array: ");
 scanf("%d",&n);
 // To enter values in array
 for(i=0;i<n;i++)
 {
  printf("Enter value for a[%d]: ",i+1);
  scanf("%d",&a[i]);
 }
 // To show declared array
  printf("Declared array: \n");
  for(i=0;i<n;i++)
  {
   printf("%d\n",a[i]);
  }
 // To find max no
    for(i=0;i<n;i++)
   {
	if(a[i]>a[i+1])
	 {
        max=a[i];
        a[i]=a[i+1];
        a[i+1]=max;
     }
   }
// To show sorted array

  printf("Maximum no: \n");
    printf("%d\n",a[n-1]);
   
 return 0;
}
 
