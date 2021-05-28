/**
1.15 Write a program to display the following simple arithmetic calculator
               ________
x           = |________|
               ___________
Y           = |___________|
               ___________
Sum         = |___________|
               ___________
Difference  = |___________|
               ___________
Product     = |___________|
               ___________
Division    = |___________|
**/
///Program start from here
#include<stdio.h>
int Sum(int a, int b);

int Difference(int a, int b);

int Product(int a, int b);

int Division(int a, int b);

///main function start from here
int main()
{
    int x, y;
    printf("Enter Value of X And Y\n\n");
    scanf("%d%d",&x,&y);
    putchar('\n');
    printf("x        = %d             y          = %d\n",x,y);
    printf("Sum      = %d             Difference = %d\n",Sum(x,y),Difference(x,y));
    printf("Product  = %d             Division   = %d\n",Product(x,y),Division(x,y));



}
/// sum Function definition
int Sum(int a, int b)
{
    return (a+b);
}
///Difference Function definition
int Difference(int a, int b)
{
    return (a-b);
}
/// Product Function definition
int Product(int a, int b)
{
    return (a*b);
}
/// Division Function definition
int Division(int a, int b)
{
    return (a/b);
}
/**
Enter Value of X And Y

12 21

x        = 12             y          = 21
Sum      = 33             Difference = -9
Product  = 252             Division   = 0

Process returned 0 (0x0)   execution time : 3.893 s
Press any key to continue.
**/
