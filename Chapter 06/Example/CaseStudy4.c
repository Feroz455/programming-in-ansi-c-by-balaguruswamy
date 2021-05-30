/**
4. Plotting of Two Functions
Problem: We have two functions of the type
y1 = exp (–ax)
y2 = exp (–ax2/2)

*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
        int i;
        float a, x, y1, y2;
        a = 0.4;
        printf("\t\t\tY ------- > \n");
        printf("0 -------------------------------------------------------- \n");
        for ( x = 0; x < 5; x = x+0.25)
        {
            /* BEGINNING OF FOR LOOP */
            /*......Evaluation of functions .......*/
        y1 = (int) ( 50 * exp( -a * x ) + 0.5 );
        y2 = (int) ( 50 * exp( -a * x * x/2 ) + 0.5 );
            /*......Plotting when y1 = y2.........*/
        if ( y1 == y2)
        {
        if ( x == 2.5)
        printf("X |");
        else
        printf(" |");
        for ( i = 1; i <= y1 - 1; ++i)
        printf(" ");
        printf("#\n");
        continue;
        }
        /*...... Plotting when y1 > y2 .....*/
        if ( y1 > y2)
        {
        if ( x == 2.5 )
        printf(" X |");
        else
        printf(" |");
        for ( i = 1; i <= y2 -1 ; ++i)
        printf(" ");
        printf("*");
        for ( i = 1; i <= (y1 - y2 - 1); ++i)
        printf("-");
        printf("0\n");
        continue;
        }
        /*........ Plotting when y2 > y1.........*/
        if ( x == 2.5)
        printf(" X |");
        else
        printf(" |");
        for ( i = 1 ; i <= (y1 - 1); ++i )
        printf(" ");
        printf("0");
        for ( i = 1; i <= ( y2 - y1 - 1 ); ++i)
        printf("-");
        printf("*\n");
        } /*.......END OF FOR LOOP........*/
        printf(" |n");

	getch();
	return 0;
}
///main() end

///program end

/**
output
                        Y ------- >
0 --------------------------------------------------------
 |                                                 #
 |                                            0---*
 |                                        0------*
 |                                    0-------*
 |                                 0------*
 |                             0------*
 |                          0----*
 |                        0-*
 |                     #
 |                 *-0
 X |             *---0
 |          *-----0
 |       *------0
 |     *-------0
 |   *-------0
 |  *-------0
 | *-------0
 |*-------0
 |*------0
 |*-----0
 |n
*/

