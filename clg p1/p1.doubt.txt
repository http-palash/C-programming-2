
#include <stdio.h>
#include <stdbool.h>

void  insert(int arr[10])
{
    int choice2,place;

    printf("\n1: For Insertion from beginning  \n2: For Insertion from anywhere \n3: For Insertion from Last \n");      
    printf("Please Enter you choice :");
    scanf("%d ",&choice2);
    printf("\n");

    switch(choice2)
    {
    case 1: place=0;                                       break;

    case 2:
    {
        printf("Enter place where u want to insert"); 

        scanf("%d",&place);
        place-- ;                                          break;
    }
    case 3: place=5;                                       break;
    default: printf("Wrong choice idiot");                 break;
    }

    int num;
    printf("\nEnter number to insert: ");
    scanf("%d",&num );

     for(int i =4;i>=place;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[place]=num;

    printf("Arrary after insertion is :");

    for(int i=0;i<6;i++)
    printf("%d  ",arr[i]);
}

void  delete(int arr[10])
{
    int choice2,place;

    printf("\n1: For Deletion from beginning  \n2: For Deletion from anywhere \n3: For Deletion from Last \n");      
    printf("Please Enter you choice :");
    scanf("%d ",&choice2);

    switch(choice2)
    {
    case 1: place=0;  break;

    case 2:
    {
        printf("Enter place from where u want to delete\n"); 

        scanf("%d",&place);
        place-- ; 
        break;
    }
    case 3: place=5;  break;
    
    default: printf("Wrong choice idiot");
                            break;
    }

    for(int i =place;i<4;i++)
    {
        arr[i]=arr[i+1];
    }
     printf("Arrary after Deletion is :");

    for(int i=0;i<4;i++)
    printf("%d  ",arr[i]);
}

void both(int arr[10])
{
    int del,ins;
    printf("Enter which place num you want to delete and what you want to insert there : ");
    scanf("%d  %d",&del,&ins);
    del--;

    for(int i =del;i<4;i++)
    {
        arr[i]=arr[i+1];
    }

    for(int i =3;i>=del;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[del]=ins;

    printf(" Resulted Array :");
    
    for(int i=0;i<=4;i++)
    printf("%d  ",arr[i]);

}

void search(int arr[])
{
    int num;
    printf("Enter number to search :");
    scanf("%d ",&num);
    bool check= false;
    
    for(int i = 0; i< 5;i++ )
    {
        if(arr[i]==num)
        check = true ;
    }
    if(check==true)
    printf("Your number is present in array !");
    else
    printf("Your number is not  present in array !");
}

int main()
{
    int arr[10] ;
    int choice1,num;
    printf("Enter elements in Array:");
    for(int i = 0; i<5;i++)
    {
    printf("arr[%d] =",i);
    scanf("%d",&arr[i]);
    }

    printf("1: For Insertion \n2: For Deletion \n3: For Deletion with insertion \n4 To search a particular element in array : \n");
    printf("Enter your choice :\n");
    scanf("%d",&choice1);

    switch (choice1)
    {
    case 1: insert(arr);     break;

    case 2: delete(arr);     break;

    case 3: both(arr);       break;

    case 4: search(arr);    break;
    
    default: printf("Wrong choice idiot");
                            break;
    }
   return 0;
} 
