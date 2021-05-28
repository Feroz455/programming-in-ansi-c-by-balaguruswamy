/**
Program 3.3
In Fig. 3.3, the program employs different kinds of operators. The results of
their evaluation are also shown for comparison.
*/
//program begin

#include<stdio.h>
//main function begin
int main()

{
        int a, b, c, d;
        a = 15;
        b = 10;
        c = ++a - b;

        printf("a = %d b = %d c = %d\n",a, b, c);

        d = b++ +a;
        printf("a = %d b = %d d = %d\n",a, b, d);

        printf("a/b = %d\n", a/b);
        printf("a%%b = %d\n", a%b);

        printf("a *= b = %d\n", a*=b);

        printf("%d\n", (c>d) ? 1 : 0);
        printf("%d\n", (c<d) ? 1 : 0);
}
//end main
/**
output
a = 16 b = 10 c = 6
a = 16 b = 11 d = 26
a/b = 1
a%b = 5
a *= b = 176
0
1

Process returned 0 (0x0)   execution time : 0.078 s
Press any key to continue.
*/
