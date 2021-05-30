
/**
page 356
programing exercise 10.8
Use the date structure define in exercise 10.4 to store two dates
Develop a function that will take these two dates as input and compares them
*It return 1 if the date1 is earlier then date2
*it return 0 if date1 is later
*/

///program begin
#include<stdio.h>
#include<conio.h>
#include"Date.h"

int dateCompare1(struct date date1, struct date date2);

//main() function begin

int main()
{
    struct date date1, date2;
    printf("Enter 1st date\n");
    date1 = input(date1);
    date1 = validate(date1);
    printf("Enter 2nd date\n");
    date2 = input(date2);
    date2 = validate(date2);
    print(date1);
    print(date2);
    int check;

    check = dateCompare1(date1, date2);
    if(check == 0)
    {
        printf("Date1 is later date\n");
    }
    else
        if(check == 1)
        {
             printf("Date2 is later date\n");
        }
    else
     printf("EQUAl!!!\n");

    getch();
    return 0;

}
///main() end

/**
If both date are equal then it will return -1
if date1 is earlier the date two then return 1
if  date2 early then return 0
*/
int dateCompare1(struct date date1, struct date date2)
{
    if(date1.year < date2.year)
    {
        return(1);
    }
    else
        if(date1.year == date2.year)
        {
            if(date1.month < date2.month)
            {
                return (1);
            }
        else
            if(date1.month == date2.month)
            {
                if(date1.day < date2.day)
                {
                    return (1);
                }
                else
                    if(date1.day == date2.day)
                    {
                    return(-1);
                    }
                else
                    return(0);

            }
            else
                return (0);
        }
    else
        return(0);

}
///program end

/**
output
Enter 1st date
Enter day
31
Enter month
1
Enter year
1945
Enter 2nd date
Enter day
6
Enter month
6
Enter year
1654
January 31,1945
June 6,1654
Date1 is later date

Process returned 0 (0x0)   execution time : 40.622 s
Press any key to continue.
*/
