/**
page 355
programming exercise 10.2
Modify the above program such that a function is used to print values to the
members and another function to display the time.
*/

//program begin
#include<stdio.h>
#include<conio.h>
struct time
{
    int hour;
    int minute;
    int second;
};
void print(struct time t);
struct time input(struct time t);
//main() function begin

int main()
{
    struct time t1;
    t1 = input(t1);
    print(t1);///print function call with struc t1

	getch();
	return 0;
}
///main() end
struct time input(struct time t)
{
    printf("Enter hour\n");
    scanf("%d",&t.hour);
    printf("Enter minute \n");
    scanf("%d",&t.minute);
    printf("Enter second\n");
    scanf("%d",&t.second);
    return(t);
};
///print function
void print(struct time t)
{
    printf("%d:%d:%d\n",t.hour, t.minute,t.second);
    return;
}
///program end

/**
output
Enter hour
16
Enter minute
40
Enter second
51
16:40:51

Process returned 0 (0x0)   execution time : 9.857 s
Press any key to continue.

*/
