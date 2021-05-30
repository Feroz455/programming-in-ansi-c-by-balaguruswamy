/**
Program 5.4
The program in Fig. 5.8 selects and prints the largest of the three numbers
using nested if....else statements.
*/


///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
        float A, B, C;
        printf("Enter three values  \n");
        scanf("%f %f %f", &A, &B, &C);

        printf("\nLargest value is ");
        if (A>B)
        {
        if (A>C)
        printf("%.2f\n", A);

        else
        printf("%.2f\n", C);
        }
        else
        {
        if (C>B)
        printf("%.2f\n", C);

        else
        printf("%.2f\n", B);
        }
	getch();
	return 0;
}


///main() end

///program end

/**
output
Enter three values
14
25
36

Largest value is 36.00
*/
