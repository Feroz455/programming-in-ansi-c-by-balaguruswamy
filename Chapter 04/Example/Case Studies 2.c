/**
2. Reliability Graph
Problem: The reliability of an electronic component is given by
reliability (r) = e – l t
where l is the component failure rate per hour and t is the time of operation in hours. A graph is required
to determine the reliability at various operating times, from 0 to 3000 hours. The failure rate l (lambda)
is 0.001.
*/

///program begin
#include<stdio.h>
#include<conio.h>
#include<math.h>

//main() function begin

#define LAMBDA 0.001
main()
{
        double t;
        float r;
        int i, R;
        for (i=1; i<=27; ++i)
        {
        printf("___");
        }
        printf("\n");
        for (t=0; t<=3000; t+=150)
        {
        r = exp(-LAMBDA*t);
        R = (int)(50*r+0.5);
        printf(" |");
        for (i=2; i<=R; ++i)
        {
        printf("*");
        }
        printf("#\n");
        }
        for (i=1; i<3; ++i)
        {
        printf(" |\n");
        }
	getch();
	return 0;
}
///main() end

///program end

/**
output
_________________________________________________________________________________
 |**************************************************#
 |*******************************************#
 |*************************************#
 |********************************#
 |***************************#
 |************************#
 |********************#
 |*****************#
 |***************#
 |*************#
 |***********#
 |**********#
 |********#
 |*******#
 |******#
 |*****#
 |*****#
 |****#
 |***#
 |***#
 |**#
 |*#
 |
*/
