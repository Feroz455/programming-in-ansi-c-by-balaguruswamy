/**
Case Studies:
1 Range of number
Problem: A survey of the computer market shows that personal computers are sold at varying costs by
the vendors. The following is the list of costs (in hundreds) quoted by some vendors:

35.00,      40.50,       25.00,      31.25,      68.15,
47.00,      26.65,       29.00,      53.45,      62.50

Determine the average cost and the range of values.

Problem analysis: Range is one of the measures of dispersion used in statistical analysis of a series
of values. The range of any series is the difference between the highest and the lowest values in the
series. That is

            Range = highest value - lowest value

it is therefor necessary to find the height and lowest values in the series
Program: A program to determine the range of values and the average cost of a personal computer in
the market is given in Fig. 5.16.
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
            int count;
            float value, high, low, sum, average, range;

            sum = 0;
            count = 0;

            printf("Enter numbers in a line : input a NEGATIVE number to end\n");

    input:

            scanf("%f", &value);

            if (value < 0)
                goto Output;

            count = count + 1;

            if (count == 1)
            high = low = value;

            else if (value > high)
            high = value;

            else if (value < low)
            low = value;
            sum = sum + value;

            goto input;
    Output:
            average = sum/count;
            range = high - low;
            printf("\n\n");

            printf("Total values : %d\n", count);
            printf("Highest-value: %f\nLowest-value : %f\n",high, low);

            printf("Range : %f\nAverage : %f\n",range, average);
	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter numbers in a line : input a NEGATIVE number to end
35 40.50 25 31.25 68.15 47 26.65 29 53.45 62.50 -1


Total values : 10
Highest-value: 68.150002
Lowest-value : 25.000000
Range : 43.150002
Average : 41.849998
*/
