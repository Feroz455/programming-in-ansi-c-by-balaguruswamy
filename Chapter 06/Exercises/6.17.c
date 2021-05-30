/**
6.17 Write a program to graph the function
y = sin(x)
in the interval 0 to 180 degrees in steps of 15 degrees.
*/

///program begin
#include<stdio.h>
#include<conio.h>
#include<math.h>

//main() function begin

int main()
{
    float y;
    int i;

    printf("X Sin(X)\n");
    for(i=0;i<=180;i+=15)
    {
    y=sin(i);
    printf("%d %f\n",i,y);
    }

	getch();
	return 0;
}
///main() end

///program end

/**
output
X Sin(X)
0 0.000000
15 0.650288
30 -0.988032
45 0.850904
60 -0.304811
75 -0.387782
90 0.893997
105 -0.970535
120 0.580611
135 0.088369
150 -0.714876
165 0.997797
180 -0.801153
*/
