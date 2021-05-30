/**
Program 6.8
The program in fig 6.11 illustrates the use of break statement in a C
program.
The program reads a list of positive values and calculates their average. The for loop is written to read
1000 values. However, if we want the program to calculate the average of any set of values less than
1000, then we must enter a ‘negative’ number after the last value in the list, to mark the end of input.
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
         int m;
        float x, sum, average;

        printf("This program computes the average of a set of numbers\n");
        printf("Enter values one after another\n");
        printf("Enter a NEGATIVE number at the end.\n\n");
        sum = 0;
        for (m = 1 ; m <= 1000 ; ++m)
        {
        scanf("%f", &x);
        if (x < 0)
        break;
        sum += x ;
        }
        average = sum/(float)(m-1);
        printf("\n");
        printf("Number of values = %d\n", m-1);
        printf("Sum = %.2f\n", sum);
        printf("Average = %.2f\n", average);
	getch();
	return 0;
}
///main() end

///program end

/**
output
This program computes the average of a set of numbers
Enter values one after another
Enter a NEGATIVE number at the end.
21 23 24 22 26 22 -1
Number of values = 6
Sum = 138.00
Average = 23.00
*/
