/**
3.17
Write a program to print a table of sin and cos function for the interval from 0 to 180 degree
in increment of 15 a shown here
*/

///program begin
#include<stdio.h>
#include<conio.h>
#include<math.h>
//main() function begin

int main()

{
    int i;
    printf("X(Degrees) \t\t sin(x) \t\t cos(x)\n\n");
    for(i = 0; i <= 180; i+=15)
    {
        printf("%d\t\t\t%.2f\t\t%.2f\n",i,sin(i),cos(i));
    }
    getch();
	return 0;
}
//main() end

///program end

/**
output
X(Degrees)               sin(x)                  cos(x)

0                       0.00            1.00
15                      0.65            -0.76
30                      -0.99           0.15
45                      0.85            0.53
60                      -0.30           -0.95
75                      -0.39           0.92
90                      0.89            -0.45
105                     -0.97           -0.24
120                     0.58            0.81
135                     0.09            -1.00
150                     -0.71           0.70
165                     1.00            -0.07
180                     -0.80           -0.60

Process returned 0 (0x0)   execution time : 0.048 s
Press any key to continue.
*/
