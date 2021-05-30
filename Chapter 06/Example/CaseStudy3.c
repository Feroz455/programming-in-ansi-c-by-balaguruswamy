/**
3. Minimum Cost
Problem: The cost of operation of a unit consists of two components C1 and C2 which can be expressed
as functions of a parameter p as follows:
C2 = 10 + p2
The parameter p ranges from 0 to 10. Determine the value of p with an accuracy of + 0.1 where the
cost of operation would be minimum.
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    float p, cost, p1, cost1;
    for (p = 0; p <= 10; p = p + 0.1)
    {
    cost = 40 - 8 * p + p * p;
    if(p == 0)
    {
    cost1 = cost;
    continue;
    }
    if (cost >= cost1)
    break;
    cost1 = cost;
    p1 = p;
    }
    p = (p + p1)/2.0;
    cost = 40 - 8 * p + p * p;
    printf("\nMINIMUM COST = %.2f AT p = %.1f\n",cost,p);

	getch();
	return 0;
}
///main() end

///program end

/**
output

MINIMUM COST = 24.00 AT p = 4.0
*/

