// Pointer 14
// To find length of string and to count no of consonant and vowel 

#include<stdio.h>
#include<string.h>
int main()

{
   char a[20],*p;
	int vowel=0,consonant=0,length=0;
	
	printf("Enter string : ");
	gets(a);
	line();
	printf("Entered string: ");
    puts(a);
    line();
    p=a;
    while(*p!='\0')
    {    	  	 
    	   if(*p=='a'||*p=='A'||*p=='e'||*p=='E'||*p=='i'||*p=='I'||*p=='o'||*p=='O'||*p=='u'||*p=='U')
    	   {
    		 vowel++;
    		 length++;
	       }
		   else
		   {
			 consonant++;
			 length++;
            }
		p++;
	}
	printf("No of vowel's are=%d",vowel);
	printf("\nNo of consonant's are=%d",consonant);
	printf("\nLength of string is:%d",length);
	return 0;
}
 void line() 
{
	int i;
	for(i=0; i<60; i++) 
	{
		printf("*");
	}
    printf("\n");	
    
}

