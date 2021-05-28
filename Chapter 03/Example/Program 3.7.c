/**
Program 3.7
Figure 3.9 shows a program using a cast to evaluate the equation
sum = 1 / i

*/
///program begin

#include<stdio.h>
//main function begin

int main()
{
        float sum ;
        int n ;
        sum = 0 ;

        for( n = 1 ; n <= 10 ; ++n )
        {
        sum = sum + 1/(float)n ;
        printf("%2d %6.4f\n", n, sum) ;

        }
}
//program end here
/**
output
 1 1.0000
 2 1.5000
 3 1.8333
 4 2.0833
 5 2.2833
 6 2.4500
 7 2.5929
 8 2.7179
 9 2.8290
10 2.9290

Process returned 0 (0x0)   execution time : 0.047 s
Press any key to continue.
*/
