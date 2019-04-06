#include<stdio.h>
#include<conio.h>
void main()
{
    char text[20];
    //char convertedText[20];
    printf("Enter the text to be converted to lower case : ");
    scanf("%s",&text);
   // convertedText[20]=strlwr(text);
    printf("\nAfter conversion to lower case : %s",strlwr(text));
     printf("\nEnter the text to be converted to upper case : ");
    scanf("%s",text);
   // convertedText[20]=strlwr(text);
    printf("\nAfter conversion to upper case : %s",strupr(text));




    }
