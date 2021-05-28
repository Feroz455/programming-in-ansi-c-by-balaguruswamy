/**
page 51
program 2.2
program in fig 2.8 shows typical declaration assignment and values store in various types of variable.
**/

///program start from here

#include<stdio.h>
////main function start from here
int main()
{
    //Declaration
    float x,p;
    double y,q;
    unsigned k;

    //Declaration and assignments
    int m = 54321;
    long int n = 1234567890;
    ///assignment
    x = 1.234567890000;
    y = 9.87654321;
    k = 54321;
    p = q = 1.0;

    ///print

    printf("m = %d\n",m);
    printf("n = %ld\n", n);
    printf("x = %.12lf\n",x);
    printf("x = %f\n",x);
    printf("y = %.12lf\n",y);
    printf("y = %f\n",y);
    printf("k = %u p = %f q = %.12lf \n",k,p,q);

    return 0;
}
///main function end here
///program end here
