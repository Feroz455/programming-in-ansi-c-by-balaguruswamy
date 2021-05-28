/**

3.15 Write a program to read three values using scanf statement and print the following
results:
a) Sum of the values
b) Average of the three values
c) Largest of three values
d) Smallest of three values
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    int a, b, c, Sum;
    float average;

    printf("Enter three number \n");
    scanf("%d %d %d",&a, &b, &c);

    Sum = a + b + c;
    printf("Sum of Values = %d\n",Sum);

    average = Sum /3;

    printf("Average of number %.2f",average);

    printf("\nLargest number is %d \n",a > b && a > c  ? a : b > c ? b :c);

    printf("\nSmallest  number is %d \n",a < b && a < c  ? a : b < c ? b :c);

	return 0;
}
//main() end

///program end

/**
output
Enter three number
12
45
32
Sum of Values = 89
Average of number 29.00
Largest number is 45

Smallest  number is 12
*/
