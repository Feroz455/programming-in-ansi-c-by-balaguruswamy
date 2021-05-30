/**
page 290
Program 9.4
The program in fig 9.10 shows how to write a c program (float x[], int n)
that return the position of the first minimum value among the first n elements
of the given array x;
*/

///program begin
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int minpos(float [], int);

//main() function begin

int main()
{
    int n;
    float x[0] = {12.5 ,3.0, 45.1, 8.2, 19.3, 10.0, 7.8, 29.9, 2.5};

    printf("Enter the value of n: ");
    scanf("%d",&n);

    if(n >= 1 && n <= 10);
    else
    {
        printf("Invalid value of n....Press any key to terminate the program..");
    getch();
	exit(0);
    }
    printf("Within the first %d elements of array , the first minimum value is ",n);
    printf("stored at index %d",minpos(x,n));
    getch();
    return 0;

}
///main() end

int minpos(float a[], int N)
{
    int i, index;
    float min= 9999.99;
    for (i = 0; i <N; i++)
    {
        if(a[i] < min)
        {

            min = a[i];
            index = i;

        }

    }
    return (index);
}

///program end

/**
output
Enter the value of n: 5
Within the first 5 elements of array , the first minimum value is stored at index 2
Process returned 0 (0x0)   execution time : 2.156 s
Press any key to continue.

*/
