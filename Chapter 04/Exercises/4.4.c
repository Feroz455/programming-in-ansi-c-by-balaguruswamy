/**
4.4 Write a program that reads 4 floating point values in the range of 0.0 to
20.0,and prints a horizontal bar chart to represent these values using the
character * as the fill char.forr the purpose of chart,the values may be rounded
off to the nearest integer.for ex.
* * * *
* * * * 4.36
* * * *
*/

///program begin
#include<stdio.h>
#include<conio.h>
#include<math.h>

//main() function begin

int main()
{
        int w,x,y,z;
        float a,b,c,d;

        a=1.95;
        b=2.24;
        c=3.40;
        d=4.65;
        w=ceil(a);
        x=floor(b);
        y=floor(c);
        z=ceil(d);
        printf("\n\n*\n*(%f)\n*",a);
        printf("\n\n* *\n* *(%f)\n* *",b);
        printf("\n\n* * *\n* * *(%f)\n* * *",c);
        printf("\n\n* * * *\n* * * *(%f)\n* * * *",d);
        getch();
        return 0;
}
///main() end

///program end

/**
output

*
*(1.950000)
*

* *
* *(2.240000)
* *

* * *
* * *(3.400000)
* * *

* * * *
* * * *(4.650000)
* * * *

*/
