/**
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{

    float number;
    int x;

    scanf("%f",&number);


     x = (int)number%10;


    printf("Right most first  number = %d\n\n",x);

    x = (int)number / 10;
    x %= 10;
    printf("Right most secant  number = %d",x);
}
//main() end

///program end

/**
output
1458.35
Right most first  number = 8

Right most secant  number = 5
Process returned 0 (0x0)   execution time : 3.063 s
Press any key to continue.

*/
