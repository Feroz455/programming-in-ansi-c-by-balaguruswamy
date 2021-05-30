/**
page 323
Programming exercises 9.18
9.18) Write a function that take an integer parameter m representing the month number
of the year and returns the corresponding name of the month.For instance if m = 3 the month is March,
*/

///program begin
#include<stdio.h>
#include<conio.h>
void month(int m);
//main() function begin

int main()
{
    int m;
    printf("Enter month number\n");
    scanf("%d",&m);
    month(m);
	getch();
	return 0;
}
///main() end
void month(int m)
{
    switch(m)
    {
    case 1:
        printf("January\n");
        break;
    case 2:
        printf("February\n");
        break;
    case 3:
        printf("March\n");
        break;
    case 4:
        printf("April\n");
        break;
    case 5:
        printf("May\n");
        break;
    case 6:
        printf("June\n");
        break;
    case 7:
        printf("July\n");
        break;
    case 8:
        printf("August\n");
        break;
    case 9:
        printf("September\n");
        break;
    case 10:
        printf("October\n");
        break;
    case 11:
        printf("November\n");
        break;
    case 12:
        printf("December\n");
        break;
    default:
        printf("WRONG MONTH NAME!!!!!");
    }

}
///program end

/**
output
Enter month number
5
May

Process returned 0 (0x0)   execution time : 3.219 s
Press any key to continue.

OUTPUT
***************************************************
Enter month number
13
WRONG MONTH NAME!!!!!
Process returned 0 (0x0)   execution time : 2.750 s
Press any key to continue.
*/
