#include<stdio.h>
int main () 
{
   int c;

   printf("Enter character: ");
   c = getc(stdin);
   printf("Character entered: ");
   putc(c, stdout);
   
   return(0);
}
