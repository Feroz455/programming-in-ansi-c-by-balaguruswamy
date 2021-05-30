/**
Program 4.8
The program presented in Fig. 4.8 illustrates the testing for correctness of
reading of data by scanf function.
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    int a;
    float b;

    char c;
    printf("Enter values of a, b and c\n");
    if (scanf("%d %f %c", &a, &b, &c) == 3)
    printf("a = %d b = %f c = %c\n" , a, b, c);
    else
    printf("Error in input.\n");
	getch();
	return 0;
}
//main() end

///program end

/**
output
Enter values of a, b and c
12 3.45 A
a = 12 b = 3.450000 c = A
Enter values of a, b and c
23 78 9
a = 23 b = 78.000000 c = 9
Enter values of a, b and c
8 A 5.25
Error in input.
Enter values of a, b and c
Y 12 67
Error in input.
Enter values of a, b and c
15.75 23 X
a = 15 b = 0.750000 = 2
*/
