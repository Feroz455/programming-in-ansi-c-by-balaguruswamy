/**
2.Solution of the quadratic equation
An equation of the form
ax^2 + bx + c = 0
is known as the quadratic equation.
The values of x that satisfy the equation are known as the roots of
the equation. A equation has two roots which are given by the following two formula

    root1 = (-b + sqrt(b^2 - 4ac)) / 2a
    root1 = (-b - sqrt(b^2 - 4ac)) / 2a
*/

///Program start from here

#include<stdio.h>
#include<math.h>

///main function begin

int main()
{
    float a, b, c , discriminant, root1, root2;

    printf("Input values of a, b, and c\n");

    scanf("%f %f %f",&a, &b, &c);
    //printf("\n\n");

    discriminant = b * b- 4*a*c;

    if(discriminant < 0)
        printf("\n\nRoots Are IMAINARY\n");
        else
        {
            root1 = (-b + sqrt(discriminant)) / (2.0*a);
            root2 = (-b - sqrt(discriminant)) / (2.0*a);

            printf("\n\nRoot1 = %5.2f\n\nRoot2 = %5.2f\n\n",root1, root2);
        }
}
///main end
///program end here

/**
output
Input values of a, b, and c
2
4
-16


Root1 =  2.00

Root2 = -4.00


Process returned 0 (0x0)   execution time : 6.692 s
Press any key to continue.

*/



