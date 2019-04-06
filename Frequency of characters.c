

#include<stdio.h>
#include<conio.h>
void main()
{
    char myName[100];

    int index=0;
    int m=1;
    int lengthOfString=0;
    int count=1;
    printf("Enter a name : ");
    scanf("%s",&myName);
    printf("My name in %s: ");
    while(myName[lengthOfString]!='\0')
    {
        printf("%c\t",myName[lengthOfString]);
        lengthOfString++;

    }

    for(index=0;index<strlen(myName);index++)
    {
        for(lengthOfString=m;lengthOfString<strlen(myName);lengthOfString++)
        {
            int count=1;
            if(myName[index]==myName[lengthOfString])
            {
                count=count+1;
                m=m+1;

                printf("\nThe letter %c occurs %d times ",myName[index],count);


            }

        }






    }



}
