/**
Program 6.10
The program in fig 6.14 illustrates the use of continue continue statement.
The program evaluates the square root of a series of numbers and prints the results. The process stops
when the number 9999 is typed in.
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
         int count, negative;
        double number, sqroot;

        printf("Enter 9999 to STOP\n");
        count = 0 ;
        negative = 0 ;
        while (count <= 100)
        {
        printf("Enter a number : ");
        scanf("%lf", &number);
        if (number == 9999)
        break; /* EXIT FROM THE LOOP */
        if (number < 0)
        {
        printf("Number is negative\n\n");
        negative++ ;
        continue; /* SKIP REST OF THE LOOP */
        }
        sqroot = sqrt(number);
        printf("Number = %lf\n Square root = %lf\n\n",number, sqroot);
        count++ ;
        }
        printf("Number of items done = %d\n", count);
        printf("\n\nNegative items = %d\n", negative);
        printf("END OF DATA\n");
	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter 9999 to STOP
Enter a number : 25.0
Number = 25.000000
Square root = 5.000000
Enter a number : 40.5

Number = 40.500000
Square root = 6.363961
Enter a number : -9
Number is negative
Enter a number : 16
Number = 16.000000
Square root = 4.000000
Enter a number : -14.75
Number is negative
Enter a number : 80
Number = 80.000000
Square root = 8.944272
Enter a number : 9999
Number of items done = 4
Negative items = 2
END OF DATA
*/

