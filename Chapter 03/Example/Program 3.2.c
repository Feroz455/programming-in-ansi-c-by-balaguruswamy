/**
Program 3.2
Program of fig 3.2 prints a sequence of squares of numbers starting from 2. The statement a *= a;
*/
//program start
#include<stdio.h>
#define N 100
#define A 2
main()
{
int a;
a = A;
while( a < N )
{
printf("%d\n", a);
a *= a;
}
}
/**
output
2
4
16

Process returned 256 (0x100)   execution time : 0.047 s
Press any key to continue.


*/
