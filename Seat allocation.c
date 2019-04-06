#include<stdio.h>
#include<conio.h>
void main()
{
    int seats[100]` ;
    int i,reqseats,startseat=0;
    int remseats=100;
    for(i=0;i<100;i++)
    {
        seats[i]=i+1;
    }
    for(i=0;i<100;i++)
        {
            printf("\nEnter the number of seats you require : ");
            scanf("%d",&reqseats);

             if(reqseats<=remseats)
             {
                printf("Your seats are from %d to %d ",seats[startseat],seats[startseat+reqseats-1]);
                startseat=seats[(startseat+reqseats-1)];
                remseats=remseats-reqseats;
                printf("\nRemaining seats : %d",remseats);

             }

                else
                {
                    printf("\nSorry,Not enough seats");

                }


        }
}




