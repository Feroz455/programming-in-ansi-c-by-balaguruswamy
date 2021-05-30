/**
page 218
Program: Case study 1
Bobble sort
*/

///program begin
#include<stdio.h>
#include<conio.h>
#define N 10
//main() function begin

int main()
{
    int i, j, n;
    float median, a[N],t;

    printf("Enter the of items\n");

    scanf("%d",&n);

    ///Reading items into array a
    printf("Input %d values\n",n);
    for(i = 1; i <= n; i++)
    {
        scanf("%f",&a[i]);
    }

    ///Sorting begins

    for(i = 1; i<=n-1; i++)
    {
        ///Tripe i begin
        for( j = 1; j <= n-1; j++)
        {
            if(a[j] <= a[j+1])
            {
                ///interchange
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }

        }
    }
    ///sorting end

    ///Calculation of median

    if( n % 2 == 0)
        median = (a[n/2] + a[n/2+1]) /2;
    else
        median = a[n/2] + 1;

    for(i = 1; i <= n; i++ )
        printf("%.2f\t",a[i]);

    printf("Median is = %.2f\t",median);
	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter the of items
5
Input 5 values
1
5
2
4
7
7.00    5.00    4.00    2.00    1.00    Median is = 6.00
*/
