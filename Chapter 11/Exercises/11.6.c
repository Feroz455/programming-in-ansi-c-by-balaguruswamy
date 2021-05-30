/**
page 394
programming Exercises 11.6
11.6 Write a function day_name that receives a number n and returns a pointer
to a character string containing the name of the corresponding day.The day names
should be kept in a static table of character strings local to function.
*/

///program begin
#include<stdio.h>
#include<conio.h>
char *dayName(int n);
//main() function begin

int main()
{
    int i;
    printf("Enter day number\n");
    scanf("%d",&i);
    char *s;
    s = dayName(i);
    puts(s);

	getch();
	return 0;
}
///main() end
char *dayName(int n)
{
    static char name[7][20] = { {"Satarday"}, {"Sunday"}, {"Monday"}, {"Tuesday"}, {"Wednesday"}, {"Thursday"}, {"Friday"} };

    return(name[n-1]);


}
///program end

/**
output
Enter day number
2
Sunday

Process returned 0 (0x0)   execution time : 4.203 s
Press any key to continue.

*/
