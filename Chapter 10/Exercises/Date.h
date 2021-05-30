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
struct date digitInput(struct date d);
struct date input(struct date d);
struct date validate(struct date d);
void print(struct date d);
struct date update(struct date d);
int dateCompare(struct date date1, struct date date2);
//main() function begin

///Date input
struct date input(struct date d)
{
    printf("Enter day \t");
    scanf("%d",&d.day);
    printf("Enter month\t");
    scanf("%d",&d.month);
    printf("Enter year\t ");
    scanf("%d",&d.year);
    return(d);
};

///date check

struct date validate(struct date d)
{
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
    printf("%s %d,%d\t",month[d.month],d.day,d.year);
    return;
}
struct date update(struct date d)
{
    d.day = d.day+150;
    if((d.month == 1)||(d.month == 3)||(d.month == 5)||(d.month == 7)||(d.month == 8)||  (d.month == 10))
    {
        if(d.day > 31)
        {
            d.month = d.month + 1;
            d.day = d.day - 31;
            return(d);
        }
        else
            return(d);

    }
    else
        if((d.month == 4)||(d.month == 6)||(d.month == 9)||(d.month == 11))
    {
        if(d.day > 30)
        {
            d.month = d.month + 1;
            d.day = d.day - 30;
            return(d);
        }
        else
            return(d);

    }
    else
        if(d.month == 2)
    {
        if(d.year % 4 == 0)
        {
            if(d.day > 29)
            {
                d.month = d.month+1;
                d.day = d.day - 29;
                return(d);
            }
            else
            return(d);
        }
        else
        {
             if(d.day > 28)
            {
                d.month = d.month+1;
                d.day = d.day - 28;
                return(d);
            }
            else
            return(d);
        }
    }

    else
        if(d.month == 12)
    {
        if(d.day > 31)
        {
            d.month = 1;
            d.year = d.year+1;
            return(d);
        }
        else
            return(d);
    }


};
struct date digitInput(struct date d)
{
    long int di;
    scanf("%ld",&di);

    d.day = di%100; ///it will return day
    di  /= 100;
    d.month = di % 100; ///it will return month
    d.year = di/100; ///and then finally year
    return(d);
};
///nextdate get intput date struc type object and a number of day
struct date nextdate(struct date d, int number)
{
    if(d.month == 1)
    {
        d.day = d.day;
    }
     if(d.month == 2)
    {
        d.day = d.day + 31;
    }
     if(d.month == 3)
    {
        if(d.year % 4 == 0)
            d.day = d.day + 60;
        else
            d.day = d.day + 59;
    }
     if(d.month == 4)
    {
        d.day = d.day + 90;
    }
     if(d.month == 5)
    {
        d.day = d.day + 120;
    }
     if(d.month == 6)
    {
        d.day = d.day + 151;
    }
     if(d.month == 7)
    {
        d.day = d.day + 181;
    }
     if(d.month == 8)
    {
        d.day = d.day + 212;
    }
     if(d.month == 9)
    {
        d.day = d.day + 243;
    }
     if(d.month == 10)
    {
        d.day = d.day + 273;
    }
     if(d.month == 11)
    {
        d.day = d.day + 304;
    }
     if(d.month == 12)
    {
        d.day = d.day + 334;
    }

    d.day = d.day + number;

    start:
    if(d.day > 365)
    {
        d.year  += 1;
        if(d.year % 4 == 0)
            d.day -= 366;
        else
            d.day -= 365;
        goto start;
    }

    else
    if(d.day <= 31 && d.day  > 0)
    {

        d.month = 1;
        d.day;
        return(d);
    }
    else
    if(d.day <= 59 && d.day > 31)
    {
        d.month = 2;
        d.day = d.day - 31;
        return(d);
    }
    else
    if(d.day <= 90 && d.day > 59)
    {
        d.month = 3;
        d.day = d.day - 59;
        return(d);
    }
    else
    if(d.day <= 120 && d.day > 90)
    {
        d.month = 4;
        d.day = d.day - 90;
        return(d);
    }else
    if(d.day <= 151 && d.day > 120)
    {
        d.month = 5;
         d.day = d.day - 120;
         return(d);
    }else
    if(d.day <= 181 && d.day > 151)
    {
        d.month = 6;
         d.day = d.day - 151;
         return(d);
    }else
    if(d.day <= 212 && d.day > 181)
    {
        d.month = 7;
         d.day = d.day - 181;
         return(d);
    }else
    if(d.day <= 243 && d.day > 212)
    {
        d.month = 8;
         d.day = d.day - 212;
         return(d);
    }else
    if(d.day <= 273 && d.day > 243)
    {
        d.month = 9;
         d.day = d.day - 243;
         return(d);
    }else
    if(d.day <= 304 && d.day > 273)
    {
        d.month = 10;
         d.day = d.day - 273;
         return(d);
    }else
    if(d.day <= 334 && d.day > 304)
    {
        d.month = 11;
         d.day = d.day - 304;
         return(d);
    }else
    if(d.day <= 365 && d.day > 334)
    {
        d.month = 12;
         d.day = d.day - 334;
         return(d);
    }
};

/**
If both date are equal then it will return -1
if date1 is earlier the date two then return 1
if  date2 early then return 0
*/
int dateCompare(struct date date1, struct date date2)
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

