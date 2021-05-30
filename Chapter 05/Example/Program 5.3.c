/**
Program 5.3 A program to evaluate the power series.
ex = 1 + x +
x x x
n
2 2 n
2! 3! !
+ + + 􀀁 , 0 < x < 1
The power series contains the recurrence relationship of the type
Tn = Tn-1
x
n
Ê
Ë Á
ˆ
¯ ˜
for n > 1
*/

///program begin
#include<stdio.h>
#include<conio.h>
#define ACCURACY 0.0001
//main() function begin

int main()
{
         int n, count;
        float x, term, sum;
        printf("Enter value of x:");
        scanf("%f", &x);

        n = term = sum = count = 1;

        while (n <= 100)
        {
        term = term * x/n;

        sum = sum + term;

        count = count + 1;

        if (term < ACCURACY)
        n = 999;
        else
        n = n + 1;
        }

        printf("Terms = %d Sum = %f\n", count, sum);

	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter value of x:0
Terms = 2 Sum = 1.000000
Enter value of x:0.1
Terms = 5 Sum = 1.105171
Enter value of x:0.5
Terms = 7 Sum = 1.648720
Enter value of x:0.75
Terms = 8 Sum = 2.116997
Enter value of x:0.99
Terms = 9 Sum = 2.691232
Enter value of x:1
Terms = 9 Sum = 2.718279
*/
