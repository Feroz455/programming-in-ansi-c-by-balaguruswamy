/**
Program 4.5
Reading of real numbers (in both decimal point and exponential notation) is
illustrated in Fig. 4.5.
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{

        float x,y;
        double p,q;

        printf("Values of x and y: ");
        scanf("%f %e", &x, &y);
        printf("\n");

        printf("x = %f\ny = %f \n\n", x, y);

        printf("Values of p and q: ");
        scanf("%lf %lf", &p, &q);

        printf("\n\np = %.12lf\np = %.12e", p,q);

	getch();
	return 0;
}
//main() end

///program end

/**
output
Values of x and y:12.3456 17.5e-2
x = 12.345600
y = 0.175000
Values of p and q:4.142857142857 18.5678901234567890
p = 4.142857142857
q = 1.856789012346e+001
*/
