/**
page 464
program 14

*/

///program begin
#include<stdio.h>
#include<conio.h>
#define PLUS +
#define MINUSE -
#define TIMES *
#define DIVIDE /
//main() function begin

int main(int argc,char *argv[])
{
    int i = 10, j = 20 , k = 30;
    int sum, sub, adi, di;
    sum = i PLUS j;
    sub = k MINUSE j;
    adi = i TIMES j;
    di = j DIVIDE i;
    printf("%d\n",sum);
    printf("%d\n",sub);
    printf("%d\n",adi);
    printf("%d\n",di);
	getch();
	return 0;
}
///main() end

///program end

/**
output
30
10
200
2

Process returned 0 (0x0)   execution time : 2.125 s
Press any key to continue.
*/
