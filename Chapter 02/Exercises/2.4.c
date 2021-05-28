/**
2.4 Programing exercises
write a program that requests two float number from the user and divides the first
number by the second and display the result along with the numbers
*/



///program begin

#include<stdio.h>
int main()
{
    float Num1, Num2;
    printf("Enter two real number\n\n");

    scanf("%f %f", &Num1, &Num2);

    printf("\n\n");

    ///prevent divide by zero
    if(Num2 == 0)
        printf("Result = 0\n");
    else
        printf("%.2f / %.2f = %.2f\n\n",Num1,Num2,(Num1/Num2));

    return 0;

}
///main end
///program end here

/**
output
Enter two real number

15425.32
216.36


15425.32 / 216.36 = 71.29


Process returned 0 (0x0)   execution time : 8.290 s
Press any key to continue.

*/
/**
output
divide by zero
Enter two real number

125.35
0


Result = 0

Process returned 0 (0x0)   execution time : 6.203 s
Press any key to continue.

*/
