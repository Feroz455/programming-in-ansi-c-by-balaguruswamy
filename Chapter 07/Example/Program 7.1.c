/**
page 196
program 7.1
Write a program using a single subscripted variable to evaluate the following expressions

                Total = 10 , i = 1; x^2
The values of x1, x2 ....... are read from the terminal


*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    int i;
    float x[10], value, total;
    //reading values into array

    printf("Enter 10 real numbers\n");

    for(i = 0; i < 10; i++)
        scanf("%f",&x[i]);

    total = 0.0;
    for(i=0; i < 10; i++)
    {
        total += pow(x[i],2);

    }
    for(i = 0; i < 10; i++)
    printf("x[%d] = %.2f\t\n",i+1,x[i]);
    printf("\n\n");

    printf("%.2f",total);



	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter 10 real numbers
1.1 2.2 3.3 4.4 5.5 6.6 7.7 8.8 9.9 10.10
x[1] = 1.10
x[2] = 2.20
x[3] = 3.30
x[4] = 4.40
x[5] = 5.50
x[6] = 6.60
x[7] = 7.70
x[8] = 8.80
x[9] = 9.90
x[10] = 10.10


446.86

*/

