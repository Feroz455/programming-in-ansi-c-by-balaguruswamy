/**
page 356
program 10.7
10.7 Add a function called nextdate to the program designed in exercise 10.4
to perform the following task
* Accepts two arguments one of the structure date containing the
    present date and the second an integer that represent the number of days to be added to the present
    date
* Adds the days to the present date and returns the structure containing the next date
    correctly

    note that the next date may be in the next month even the next year
*/

///program begin
#include<stdio.h>
#include<conio.h>
#include"Date.h"
#include<time.h>

struct date nextdate(struct date d, int t);
//main() function begin

int main()
{
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    struct date d;
    int i;

    d.day   = tm.tm_mday;
    d.month = tm.tm_mon+1;
    d.year  = tm.tm_year+1900;
    printf("Current date %d - %d - %d\n",d.day, d.month, d.year);
    printf("Enter Number of days to be added\n");
    scanf("%d",&i);
    d =  nextdate(d,i);
    print(d);
	getch();
	return 0;
}
///main() end
///next date start here ;-(

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
///program end

/**
output
Current date 10 - 5 - 2021
Enter Number of days to be added
152
October 9,2021

Process returned 0 (0x0)   execution time : 6.447 s
Press any key to continue.

*/
