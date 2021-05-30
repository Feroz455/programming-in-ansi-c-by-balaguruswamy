/**
page 394
programming Exercises 11.
11.2 We know that the roots of a quadratic equation of the form

a*(x*x) + bx + c = 0;
are given by the following equations


x1 = (-b+square-root(b*b - 4ac))/ 2a
x1 = (-b-square-root(b*b - 4ac))/ 2a


*/

///program begin
#include<stdio.h>
#include<conio.h>
#include<math.h>
//main() function begin
float *root(int *a, int *b, int *c);
int main()
{
    int a,b,c;
    float x1, x2;

    float e , *r;


    r = root(&a, &b,&c);
    e = *r;
    if(e != 0)
    {
         x1 = (-b+sqrt(*r))/ (2*a);
        x2 = (-b-sqrt(*r))/ (2*a);
        printf("\nx1 = %.2f \n",x1);
        printf("x2 = %.2f \n",x2);

    }
    else
    {
         printf("Root is imaginary\n");
    }


	getch();
	return 0;
}
///Root function will return a pointer
float *root(int *a, int *b, int *c)
{
    float root;
    float *p;
    printf("Enter value of a, b and c\n");
    scanf("%d %d %d",a,b,c);
    p = &root;

    *p = pow(*b,2) - (4* *a * *c);

    return(p); //return address of root
}
///main() end

///program end

/**
output
Enter value of a, b and c
12
45
74

x1 = -1.#J
x2 = -1.#J

Process returned 0 (0x0)   execution time : 4.000 s
Press any key to continue.


*/
