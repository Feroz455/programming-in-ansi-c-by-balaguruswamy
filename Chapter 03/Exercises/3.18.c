/**
3.18 Write a program to compute the values of square-roots and squares of the numbers 0 to 100 in
steps 10 and print the output in a tabular form as shown below.
*/

///program begin
#include<stdio.h>
#include<conio.h>
#include<math.h>

//main() function begin

int main()
{
    int i;
    printf("Number \t\t Square-root\t\t Square\n\n");
    for(i = 0; i <= 100; i+=10)
    {
        printf("%d\t\t\t%.2f\t\t%.2f\n",i, sqrt(i),pow(i,2));
    }

	getch();
	return 0;
}
//main() end

///program end

/**
output
Number           Square-root             Square

0                       0.00            0.00
10                      3.16            100.00
20                      4.47            400.00
30                      5.48            900.00
40                      6.32            1600.00
50                      7.07            2500.00
60                      7.75            3600.00
70                      8.37            4900.00
80                      8.94            6400.00
90                      9.49            8100.00
100                     10.00           10000.00

*/
