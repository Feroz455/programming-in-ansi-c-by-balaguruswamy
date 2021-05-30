/**
page 298
Program 9.6
Write a program to calculate the standard deviation of an array of values
the array element are read from the terminal.Use function to calculate standard deviation and mean
*/

///program begin
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define SIZE 5

///function prototype

float std_dev(float a[], int n);
float mean (float a[], int n);

//main() function begin

int main()
{
    float value[SIZE];

    int i;

    printf("Enter %d float values\n",SIZE);
    for( i = 0;  i < SIZE; i++)
    {
        scanf("%f",&value[i]);
    }
    printf("Std.Deviation is %f\n",std_dev(value, SIZE));

	getch();
	return 0;
}
///main() end

///start std_dev function
float std_dev(float a[], int n)
{
    int i;
    float x, sum = 0.0;
    x = mean(a,n);
    for(i = 0; i < n; i++)
    {
        sum += (x-a[i]) * (x - a[i]);
        return(sqrt(sum/(float )n));
    }
}
//end std_dev function
//mean function begin
float mean(float a[], int n)
{
    int i;
    float sum = 0.0;
    for(i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return (sum/(float)n);
}
///end mean function
///program end

/**
output
Enter 5 float values
35.0 67.0 79.5 14.20 55.75
Std.Deviation is 6.837896

Process returned 0 (0x0)   execution time : 120.563 s
Press any key to continue.



*/
