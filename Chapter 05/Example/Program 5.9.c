/**
Program 5.9
Program presented in Fig. 5.15 illustrates the use of the goto statement.
keeps the count of numbers read. When count is less than or equal to 5, goto read
; directs the control to the label read; otherwise, the program
prints a message and stops.
*/

///program begin
#include<stdio.h>
#include<conio.h>
#include<math.h>

//main() function begin

int main()
{
    double x, y;
    int count;
    count = 1;
    printf("Enter FIVE real values in a LINE \n");
    read:
    scanf("%lf", &x);

    printf("\n");
    if (x < 0)
    printf("Value - %d is negative\n",count);
    else
    {
    y = sqrt(x);
    printf("%lf\t %lf\n", x, y);
    }
    count = count + 1;
    if (count <= 5)
    goto read;
    printf("\nEnd of computation");

	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter FIVE real values in a LINE
50.70 40 -36 75 11.25

50.700000        7.120393

40.000000        6.324555

Value - 3 is negative

75.000000        8.660254

11.250000        3.354102

End of computation
*/
