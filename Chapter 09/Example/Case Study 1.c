/**
page 315
Case study 1
Calculation of area under a curve
*/

///program begin
#include<stdio.h>
#include<conio.h>

float start_point, end_point, total_area;
int numtraps;
//main() function begin

int main()
{
    void input(void);
    float find_area(float a, float b, int n);///function prototype

    printf("AREA UNDER A CURVE\n");
    input();

    total_area = find_area(start_point,end_point,numtraps);
    printf("TOTAL AREA = %f", total_area);

	getch();
	return 0;
}
///main() end


void input()
{
    printf("\nEnter lower limit: ");
    scanf("%f",&start_point);

    printf("\nEnter upper limit: ");
    scanf("%f",&end_point);

    printf("Enter Number of trapezos: ");
    scanf("%d",&numtraps);
}


float find_area(float a, float b, int n)
{
    float base, lower, h1, h2;//LOCAL VARIABLE
    float function_x(float x);///prototyping
    float trap_area(float h1, float h2, float base); ///prototype

    base = (b - 1)/n;
    lower = a;

    for (lower = a; lower <= b - base; lower = lower + base)
    {
        h1 = function_x(lower);
        h2 = function_x(lower + base);

        total_area += trap_area(h1, h2, base);


    }
    return (total_area);
}


float trap_area(float height_1, float height_2, float base)
{
    float area; ///local variable
    area = 0.5 * (height_1 + height_2) * base;
    return(area);
}

float function_x(float x)
{
    /* F(X) = X * X + 1*/
    return(x*x+1);
}
///program end

/**
output
AREA UNDER A CURVE

Enter lower limit: 0

Enter upper limit: 3
Enter Number of trapezos: 30
TOTAL AREA = 12.002226
Process returned 0 (0x0)   execution time : 10.284 s
Press any key to continue.

*/
