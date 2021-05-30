/**
page 355
program Modify the input function used in the exercise 10.4
such that it reads a value that represents the data in the from
of a long integer like 19450815 for the date 15-08-1945 (August 15 1945)
and assigns suitable values to the members day month and year


use suitable algorithm to convert the long integer 19450815 into year month and day
*/

///program begin
#include<stdio.h>
#include<conio.h>
///Use 10.4 function through this header file;
///if you are not getting this code then check 10.4 program and Date.h header file into your code file
#include"Date.h"
//main() function begin
struct date digitInput(struct date d);
int main()
{
    struct date d;
   /// called digitInput function to convert long int number into date
    d = digitInput(d);
    ///printing date through print() function ..which is reside into Date.h header file
    print(d);

	getch();
	return 0;
}
///main() end
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
///program end

/**
output
19450815
August 15,1945

Process returned 0 (0x0)   execution time : 8.053 s
Press any key to continue.
*/
