#include<stdio.h>
#include<conio.h>
void main()
{
    int requiredSeats,i;
    int n=1;
    int remSeats=100;

        for(i=0;i<100;i++)
        {
            printf("\nEnter the number of seats required  : ");
            scanf("%d",&requiredSeats);
             if(requiredSeats<remSeats)
                {
                    printf("\nYour seats are ");
                    for(i=n;i<=(n+requiredSeats)-1;i++)
                    {

                        printf( "%d,",i);

                    }
                    remSeats=remSeats-requiredSeats;
                    printf("\nSeats booked successfully");
                    printf("\nRemaining seats : %d",remSeats);
                    n=n+requiredSeats;
                }
                else
                {
                    printf("\nSorry, Not enough seats available :( ");
                }

        }

}
