/**
3.8 The total distance traveled by a vehicle, a is the acceleration. Write a program to
calculate the distance travelled by at regular intervals of time ,given the values
of u and a.the program should be flexible to the user select his own time interval
and repeat the calculation for diff values of u,a.
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    int u,t,a;
    float Dis;

    printf("Enter the value of u,a and t\n");
    scanf("%d %d %d",&u,&a,&t);
    Dis=(u*t)+(a*(t*t))/2;
    printf("The distance is : %.2f \n",Dis);
    getch();
}
//main() end

///program end

/**
output
Enter the value of u,a and t
2 2 4
The distance is : 24.00

Process returned 0 (0x0)   execution time : 10.630 s
Press any key to continue.

*/
