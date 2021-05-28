/**
3.7 Write a program that will read a real no. from the keyboard and print the
output in one line:
Smallest integer not the given no. largest integer
not less than   the number   greater than the no.
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{

        int SmallNo,LargeNo;
        float RealNo;
        printf("Enter the real no.");

        scanf("%f",& RealNo);

        SmallNo=RealNo;
        LargeNo=RealNo;

        printf("Smallest integer not\t");
        printf("The given no\t");
        printf("Largest integer not \n");
        printf("less than the number\t\t\t");
        printf(" greater than the no.\n");
        printf("%d ", SmallNo);
        printf("\t\t\t%.2f \t\t\t", RealNo);
        printf("%d ", LargeNo);
        getch();
}
//main() end

///program end

/**
output
Enter the real no. 365.36
Smallest integer not    The given no    Largest integer not
less than the number                     greater than the no.
365                     365.36                  365
Process returned 0 (0x0)   execution time : 7.923 s
Press any key to continue.
*/
