#include<stdio.h>
#include<conio.h>
void main()
{
    char text[100];
    int i=0;
    printf("Enter the text : ");
   scanf("%s",&text);
   printf("The converted text is : ");

while(text[i]!='\0')
    {

        //printf("\nHere we go ");
        text[i]=text[i]+32;
        printf("%c",text[i]);
        i++;


    }
}
