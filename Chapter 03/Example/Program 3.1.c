/**
Program 3.1
The program in Fig. 3.1 shows the use of integer arithmetic to convert a
given number of days into months and days.
*/
#include<stdio.h>
main ()
{
        int months, days ;

        printf("Enter days\n") ;
        scanf("%d", &days) ;
        months = days / 30 ;
        days = days % 30 ;
        printf("Months = %d Days = %d", months, days) ;
    }
/**
Output
Enter days
265
Months = 8 Days = 25
Enter days
364
Months = 12 Days = 4
Enter days
45
Months = 1 Days = 15
*/
