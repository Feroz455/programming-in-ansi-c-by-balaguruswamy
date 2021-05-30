/**
page 355
programming exercises 10.4
Define a structure data type named date containing three integer
members day , month, and year
.Develop an interactive  modular program to perform
the following task
* To read data into structure members by a function
* To validate the date entered by another function
* To print the date in the formate
April 29,2002
by the third function

The input data should be three integers like 29,4 and 2002 corresponding to day, month, and
year.Examples of invalid data


31, 4 , 2002 - April hase only 30 days
29, 2 , 2002 - 2002 is not a leap year
*/

///program begin
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct date
{
    int day;
    int month;
    int year;
};
struct date input(struct date d);
struct date validate(struct date d);
void print(struct date d);
//main() function begin

int main()
{
    struct date Recent;
    Recent = input(Recent);
    Recent = validate(Recent);
    print(Recent);
	getch();
	return 0;
}
///main() end
///Date input
struct date input(struct date d)
{
    printf("Enter day\n");
    scanf("%d",&d.day);
    printf("Enter month\n");
    scanf("%d",&d.month);
    printf("Enter year\n");
    scanf("%d",&d.year);
    return(d);
};

///date check

struct date validate(struct date d)
{
    printf("%d/%d/%d - ",d.day,d.month,d.year);
    if(d.month <= 12 && d.month > 0)
    {
        if(d.month == 1)
        {
        if(d.day <= 31 && d.day > 0)
            return(d);
            else
            {
                printf("January has 31 days\n ");
                exit(0);
            }
        }
        if(d.month == 2)
        {
            if(d.year % 4 == 0)
            {
                 if(d.day <= 29 && d.day > 0)
                  return(d);
                  else
                  {
                      printf("February has 29 days\n");
                      exit(0);
                  }
            }
            else
            {
                if(d.day <= 28 && d.day > 0)
                  return(d);
                  else
                  {
                      printf("%d is not leap year\n",d.year);
                      exit(0);
                  }
            }


        }
        if(d.month == 3)
        {
            if(d.day <= 31 && d.day > 0)
            return(d);
            else
            {
                printf("March  has only  31 days\n ");
                exit(0);
            }
        }
        if(d.month == 4)
        {
            if(d.day <= 30 && d.day > 0)
            return(d);
            else
            {
                printf("April has only 30 days\n ");
                exit(0);
            }
        }
        if(d.month == 5)
        {
            if(d.day <= 31 && d.day > 0)
            return(d);
            else
            {
                printf("May has only 31 days\n ");
                exit(0);
            }
        }
           if(d.month == 6)
        {
        if(d.day <= 30 && d.day > 0)
            return(d);
            else
            {
                printf("June has only 30 days\n ");
                exit(0);
            }
        }
           if(d.month == 7)
        {
        if(d.day <= 31 && d.day > 0)
            return(d);
            else
            {
                printf("July has only 31 days\n ");
                exit(0);
            }
        }
           if(d.month == 8)
        {
        if(d.day <= 31 && d.day > 0)
            return(d);
            else
            {
                printf("August has only 31 days\n ");
                exit(0);
            }
        }
           if(d.month == 9)
        {
        if(d.day <= 30 && d.day > 0)
            return(d);
            else
            {
                printf("September has only 30 days\n ");
                exit(0);
            }
        }
           if(d.month == 10)
        {
        if(d.day <= 31 && d.day > 0)
            return(d);
            else
            {
                printf("October has only 31 days\n ");
                exit(0);
            }
        }
           if(d.month == 11)
        {
        if(d.day <= 30 && d.day > 0)
            return(d);
            else
            {
                printf("November has only 30 days\n ");
                exit(0);
            }
        }
           if(d.month == 12)
        {
        if(d.day <= 31 && d.day > 0)
            return(d);
            else
            {
                printf("December has only 31 days\n ");
                exit(0);
            }
        }

    }
    else
        printf("There is no %dth month",d.month);
    exit(0);

};
///print function
void print(struct date d)
{
    char month[][20] = {{"\0"},{"January"}, {"February"}, {"March"}, {"April"},
                        {"May"}, {"June"}, {"July"}, {"August"}, {"September"},
                        {"October"}, {"November"},{"December"}};
    printf("%s %d,%d\n",month[d.month],d.day,d.year);
    return;
}
///program end

/**
output
Enter day
12
Enter month
12
Enter year
1998
12/12/1998 - December 12,1998

Process returned 0 (0x0)   execution time : 9.979 s
Press any key to continue.

*/
