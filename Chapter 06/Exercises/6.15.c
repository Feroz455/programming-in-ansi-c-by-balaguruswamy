/**
6.15
The present value (Popularly known as book value) of an item is given by the relationship
P = c (1–d)n
where c = original cost
d = rate of depreciation (per year)
n = number of years
p = present value after y years.
If P is considered the scrap value at the end of useful life of the item, write a program to compute
the useful life in years given the original cost, depreciation rate, and the scrap value.
The program should request the user to input the data interactively.
*/

///program begin
#include<stdio.h>
#include<conio.h>
#include<math.h>

//main() function begin

int main()
{
    float cost, rate, present_value;
  int  years;

    printf("Enter Original Cost: ");
      scanf("%f", &cost);

    printf("Enter Depreciation rate: ");
      scanf("%f", &rate);

    printf("Enter Number of Years: ");
      scanf("%d", &years);

    present_value = cost*pow((1 - rate),years);

    printf("Books Present Value: %0.2f\n", present_value);
	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter Original Cost: 560
Enter Depreciation rate: .2
Enter Number of Years: 5
Books Present Value: 183.50

Process returned 0 (0x0)   execution time : 11.460 s
Press any key to continue.
*/
