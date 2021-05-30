/**
page 323
Programming Exercises 9.19
In Preparing the calendar for a year we need to know weather that particular year is leap year or
not.Design a function leap() that receives the year as a parameter and returns an appropriate message


What modifications are required if we want to use the function in preparing the actual calender?

*/

///program begin
#include<stdio.h>
#include<conio.h>
int leap(int year);

//main() function begin

int main()
{
    int m;
    printf("Enter year\n");
    scanf("%d",&m);
    int feb = leap(m);
    printf("February = %d",feb);

	getch();
	return 0;
}
///main() end
int leap(int year)
{
    if(year % 4 == 0)
    {
        printf("%d is leap year\n",year);
        return(29);
    }
    else
        printf("%d is not leap year\n",year);
        return(28);
}
///program end

/**
output
Enter year
2000
2000 is leap year
February = 29
*/
