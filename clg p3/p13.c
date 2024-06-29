// pointer 13 to compare string
#include<stdio.h>
int main()
{

    char a[50],b[50],*s1,*s2;
    int i,equal = 0;

    printf("Enter The First String: ");
    scanf("%s",a);

    printf("Enter The Second String: ");
    scanf("%s",b);

    s1 = a;
    s2 = b;
    printf("\nString 1:%u",*s1);
    printf("\nString 2:%u\n",*s2);
    printf("\n");
    while(*s1==*s2)
    {
        if (*s1=='\0'||*s2=='\0')   
        break;
        s1++;
        s2++;
    }
    if(*s1=='\0'&&*s2=='\0')
    {
       printf("\n\nBoth Strings Are Equal.");
    }
    else
    {
        printf("\n\nBoth Strings Are Not Equal.");
    }
}
