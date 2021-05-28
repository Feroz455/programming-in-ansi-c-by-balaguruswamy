/**
2.8 Write a program to read two floating point numbers using a scanf statement, assign their
sum to an integer variable and then output the values of all the three variables.
*/

///program begin

#include<stdio.h>
//main function begin

int main()
{

    float num1, num2;
    int sum;
    ///read two floating point numbers using a scanf statement
    scanf("%f %f",&num1, &num2);
    ///assign their sum to an integer variable
    sum = num1+num2;
    ///output the values of all the three variables
    printf("Number1 = %.2f\nNumber2 = %.2f\nSum of both number = %d",num1, num2, sum);


}
///program end with main function
/**
output
15.35
326.145
Number1 = 15.35
Number2 = 326.14
Sum of both number = 341
Process returned 0 (0x0)   execution time : 5.629 s
Press any key to continue.

*/
