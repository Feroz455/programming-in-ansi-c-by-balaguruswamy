/**
1. Calculation of average of number
A Program to calculate the average of a set of N numbers is given in fig 2.11
**/

///program start from here
#include<stdio.h>
#define N 10
///main function begin from here

int main()
{
    int count;
    float sum, average, number;
    sum  = 0;
    count = 0;

    while(count < N )
    {
        scanf("%f",&number);
        sum += number;
        count++;
    }
    average = sum / N;
    printf("N  = %d Sum = %f\n", N, sum);
    printf("Average = %.2f\n",average);
    return 0;
}
//program end here also main function end here

/**
Output
1
2.3
4.67
1.42
7
3.67
4.08
2.2
4.25
8.21
N  = 10 Sum = 38.799999
Average = 3.88

Process returned 0 (0x0)   execution time : 42.468 s
Press any key to continue.
**/
