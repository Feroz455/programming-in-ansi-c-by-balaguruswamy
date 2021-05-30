/**
1. Table of binomial coefficients
Problem: Binomial coefficient are used in the study of binomial distribution and reliability
of multicomponent redundant system.It is give by
B(m,n) = (m/x) = m! / (x!(m-X)), m >= x;
A table of binomial coefficient is required to determine the binomial coefficient for any set of
m and x

*/

///program begin
#include<stdio.h>
#include<conio.h>
#define MAX 10
//main() function begin

int main()
{
         int m, x, binom;
        printf(" m x");
        for (m = 0; m <= 10 ; ++m)
        printf("%4d", m);
        printf("\n------------------------------------------------\n");
        m = 0;
        do
        {
            printf("%2d ", m);
            x = 0; binom = 1;
            while (x <= m)
            {
            if(m == 0 || x == 0)
            printf("%4d", binom);
            else
            {
            binom = binom * (m - x + 1)/x;
            printf("%4d", binom);
            }
            x = x + 1;
            }
            printf("\n");
            m = m + 1;
            }
            while (m <= MAX);
            printf("\n------------------------------------------------\n");
	getch();
	return 0;
}
///main() end

///program end

/**
output
 mx   0   1   2   3   4   5   6   7   8   9  10
------------------------------------------------
 0    1
 1    1   1
 2    1   2   1
 3    1   3   3   1
 4    1   4   6   4   1
 5    1   5  10  10   5   1
 6    1   6  15  20  15   6   1
 7    1   7  21  35  35  21   7   1
 8    1   8  28  56  70  56  28   8   1
 9    1   9  36  84 126 126  84  36   9   1
10    1  10  45 120 210 252 210 120  45  10   1

------------------------------------------------
*/

