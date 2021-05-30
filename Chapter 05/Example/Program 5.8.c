/**
Program 5.8
Write a program to determine the Greatest Common Divisor (GCD) of two
numbers.

Algorithm
Step 1 – Start
Step 2 – Accept the two numbers whose GCD is to be found (num1, num2)
Step 3 – Call function GCD(num1,num2)
Step 4 – Display the value returned by the function call GCD(num1, num2)
Step 5 – Stop
GCD(a,b)
Step 1 – Start
Step 2 – If b > a goto Step 3 else goto Step 4
Step 3 – Return the result of the function call GCD(b,a) to the calling function
Step 4 – If b = 0 goto Step 5 else goto Step 6
Step 5 – Return the value a to the calling function
Step 6 – Return thFCe result of the function call GCD(b,a mod b) to the calling function
*/

///program begin
#include<stdio.h>
#include<conio.h>
#include <math.h>
///GCD Function prototype

int GCD(int m, int n);
//main() function begin

int main()
{
         int num1,num2;

        printf("Enter the two numbers whose GCD is to be found: ");
        scanf("%d %d",&num1,&num2);
        printf("\nGCD of %d and %d is %d\n",num1,num2,GCD(num1,num2));
        getch();
	getch();
	return 0;
}
///main() end
//GCD function begin

int GCD(int a, int b)
{
    if(b>a)
    return GCD(b,a);
    if(b==0)
    return a;
    else
    return GCD(b,a%b);

}
//GCD Function end
///program end

/**
output
Enter the two numbers whose GCD is to be found: 18 12

GCD of 18 and 12 is 6

*/
