/**
page 233
7.1
Write a program for fitting a staight line through a set of point (xi,yi) i = 1.......n
The straight line equation is
y = mc
and the value of m and c given y
m =  n * SUMOF(xiyi) - SOMOF(xi) SOMOF(Yi) / n * SUMOF(X^2) - SUMOF(Xi)^2

c = 1/n (SUMOF yi - m SUMOF xi)
*/

///program begin
#include<stdio.h>
#include<conio.h>
#include<math.h>

//main() function begin

int main()
{

    int n,i,x1yi = 0;
    int x;
    float y;
    float m, c;

    printf("Enter value of n\n");
    scanf("%d",&n);

    int xi[n],yi[n],sumOf[3] = {0,0};

    printf("To Calculate Straight line enter value of %d number y \t",n);

    for(i = 0; i < n; i++)
    {
        scanf("%d",&yi[i]);
        sumOf[0] += yi[i];
    }

    printf("To Calculate Straight line enter value of %d number x \t",n);
    for(i = 0; i < n; i++)
    {
        scanf("%d",&xi[i]);
        sumOf[1] += xi[i];
        sumOf[2] += pow(xi[i],2);
    }

    for(i = 0; i < n; i++)
    {
        x1yi += xi[0] * yi[i];
    }

    m = ((n*x1yi) - (xi[0] * sumOf[0])) / ((n*sumOf[2]) - pow(sumOf[1],2));
    c = ((float) 1/n) * (sumOf[0] - (m * sumOf[1])) ;

    printf("Straight line equation  y = %2.f X  + (%.2f)\n",m,c);

    printf("Enter value of x\n");
    scanf("%d",&x);

    y = m*x + c;

    printf("Straight line equation  y = %2.f x %d + (%.2f)\n",m,x,c);
    printf(" y = %.2f",y);



	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter value of n
2
To Calculate Straight line enter value of 2 number y    1 2
To Calculate Straight line enter value of 2 number x    4 5
Straight line equation  y = 12 X  + (-52.50)
Enter value of x
1
Straight line equation  y = 12 x 1 + (-52.50)
 y = -40.50

*/
