/**
page 221
Case study 2
Calculation f standard Deviation
In statistics, standard deviation is used to measure deviation of data from its mean. The formula for
calculating standard deviation of n items is
s = sqrt(variance)

where
variance =
1
n
(x m) i
i =
n
Â - 2
1
and
m = mean =
1
1
n
xi
i =
nÂ
The algorithm for calculating the standard deviation is as follows:
*/

///program begin
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAXSIZE 100

//main() function begin

int main()
{
    int i, n;
    float value[MAXSIZE],deviation,sum,sumsqr,mean,variance,stddeviation;
    sum = sumsqr = n = 0;
    printf("Input values input -1 to end\n\n");

    for(i = 1; i < MAXSIZE; i++)
    {
        scanf("%f",&value[i]);
        if(value[i] == -1)
            break;
        sum  += value[i];
        n++;
    }
    mean = sum/(float)n;

    for(i = 1; i <= n; i++)
    {
        deviation = value[i] - mean;
        sumsqr += deviation * deviation;
    }

    variance = sumsqr/ (float)n;

    stddeviation = sqrt(variance);

    printf("\nNUMBER OF ITEMS : %d\n",n);
    printf("Mean : %f\n",mean);

    printf("Standard deviation : %f\n",stddeviation);

	getch();
	return 0;
}
///main() end

///program end

/**
output
Input values input -1 to end

65 9 27 78 12 20 33 49 -1

NUMBER OF ITEMS : 8
Mean : 36.625000
Standard deviation : 23.510303



*/
