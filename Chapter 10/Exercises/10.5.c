/**
page Design a function that accepts the date structure design in Exercises 10.4
to increment the date by one day and return the new date.
The following rules are applicable;
* if the date is the last day in a month ,month should be incremented
* if it is the last day in December , the year should be incemented
*/
/*** IM SO HAPPY *******/
/***I learn how to make my won header file*********/
///program begin


/// Date.h is my own define header file
////ha ha ha...just having fun...10.4 program was saved at the same file this program is without main function.
///dont be surprised ...we will call function of Date.h  from this program's main function
///if you are not getting this line then copy 10.4 whole program here


#include"Date.h"
#include<stdio.h>
#include<conio.h>

///Update date
struct date update(struct date d);
//main() function begin

int main()
{
    struct date d;
    d = input(d);
    d = validate(d);
    print(d);
    d = update(d);
    print(d);

	getch();
	return 0;
}
///main() end
struct date update(struct date d)
{
    printf("Update date by one day!!\n");
    d.day = d.day+1;
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
            d.day = d.day - 31;
            d.year = d.year+1;
            return(d);
        }
        else
            return(d);
    }


};
///program end

/**
output
Enter day
31
Enter month
12
Enter year
1998
31/12/1998 - December 31,1998
Update date by one day!!
January 1,1999

Process returned 0 (0x0)   execution time : 11.217 s
Press any key to continue.
*/
