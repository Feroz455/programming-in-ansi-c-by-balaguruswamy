/**
page 355
programing Exercise 10.1
10.1) Define a structure data type called time_struct containing three members integer hour, integer
minute and integer second. Develop a program that would assign values to the individual
members and display the time in the following form
16:40:51
*/

///program begin
#include<stdio.h>
#include<conio.h>
struct time
{
    int hour;
    int minute;
    int second;
};
void print(struct time t);
//main() function begin

int main()
{
    struct time t1;
    t1.hour = 16;
    t1.minute = 40;
    t1.second = 51;
    print(t1);///print function call with struc t1

	getch();
	return 0;
}
///main() end
///print function
void print(struct time t)
{
    printf("%d:%d:%d\n",t.hour, t.minute,t.second);
    return;
}
///program end

/**
output
16:40:51

Process returned 0 (0x0)   execution time : 2.187 s
Press any key to continue.
*/
