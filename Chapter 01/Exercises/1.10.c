/*
page 21
1.10 Area of a triangle is given by the formula
A = sqrt(S*(S-a)*(S-b)*(S-c))
where a, b and c are sides of the triangle and
S = 0.5 * (a + b + c );
Write a program to compute the area of the triangle given the values of a , b and c
*/
//Program start from here
#include<stdio.h>
#include<math.h>
//Function Prototyping
float CirCumference(int a, int b, int c);
void AreaOfATringle(int a, int b, int c);

//main function start from here
int main()
{
    int a, b, c;

    printf("Enter the value of a, b and c \n");
    scanf("%d%d%d",&a, &b, &c);

    putchar('\n');
    AreaOfATringle(a,b,c);
    return 0;
}
//float AreaOfATringle(int a, int b, int c);
void AreaOfATringle(int a, int b, int c)
{
    float S;
    //call CirCumference function
    S = CirCumference(a, b, c);
    printf("a = %d \nb = %d \nc = %d\n\nS = %.2f\n\n",a, b, c,S);
    printf("Area of a Triangle = %.2f\n",(sqrt(S*(S-a)*(S-b)*(S-c))));
}

//float CirCumference(int a, int b, int c); definition
float CirCumference(int a, int b, int c)
{
    return ((a+b+c)*0.5);
}
/*
output
Enter the value of a, b and c
12 12 12
a = 12
b = 12
c = 12
S = 18.00
Area of a Triangle = 62.35
Process returned 0 (0x0)   execution time : 3.484 s
Press any key to continue.
*/

