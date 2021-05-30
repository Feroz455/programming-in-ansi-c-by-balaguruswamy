/**
Program 5.1
The program in Fig. 5.3 reads four values a, b, c, and d from the terminal and
evaluates the ratio of (a+b) to (c–d) and prints the result, if c–d is not equal
to zero.
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    int a, b, c, d;
    float ratio;

    printf("Enter four integer values\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (c-d != 0) /* Execute statement block */
    {
    ratio = (float)(a+b)/(float)(c-d);
    printf("Ratio = %f\n", ratio);

    }
	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter four integer values
12
23
34
45
Ratio = -3.181818
*/
