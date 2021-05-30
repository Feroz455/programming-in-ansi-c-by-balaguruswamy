/**
page 355
programming exercises 10.3
10.3) Design  a function update that would accept the data structure design in Exercise 10.1
and increment time by one second and return the new time.
(if the increment result in 60 second then the second member is set to zero and the minute member is
 incremented by one.Then if the result is 60 minute,  the minute member is set to zero and the hour
 member is incremented by one.
 finally when the hour 24 its set to zero)
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
struct time input(struct time t);
struct time update(struct time t,int  hour,int  minute,int second);
//main() function begin

int main()
{
    int hour, minute, second;

    struct time t1;

    t1 = input(t1);
    print(t1);

    printf("Enter update time\n");
    scanf("%d %d %d",&hour, &minute, &second);

    t1 = update(t1, hour, minute, second);

    print(t1);

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

struct time update(struct time t,int  hour,int  minute,int second)
{
    t.second += second;
    if(t.second > 59)
    {
        t.minute += 1;
        t.second =  t.second - 60;
    }
    t.minute += minute;
    if(t.minute > 59)
    {
        t.hour += 1;
        t.minute = t.minute - 60;
    }
    t.hour +=  hour;
    if(t.hour > 23)
    {
        t.hour = 0;
    }
    return(t);
};
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
Enter update time
2
20
45
19:1:36

Process returned 0 (0x0)   execution time : 28.860 s
Press any key to continue.

*************************************************
Enter hour
16
Enter minute
40
Enter second
51
16:40:51
Enter update time
8 20 20
0:1:11

Process returned 0 (0x0)   execution time : 27.658 s
Press any key to continue.

*/
