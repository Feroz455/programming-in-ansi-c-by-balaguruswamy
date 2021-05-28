/**
Program 3.6
Output of the program in Fig. 3.7 shows round-off errors that can occur in computation of floating point numbers.
*/

///program begin

#include<stdio.h>

//main function begin

int main()
{
            float sum, n, term ;
        int count = 1 ;
        sum = 0 ;
        printf("Enter value of n\n") ;
        scanf("%f", &n) ;
        term = 1.0/n ;
        while( count <= n )
        {
        sum = sum + term ;
        count++ ;
        }
        printf("Sum = %f\n", sum) ;
}
//program end

/**
Enter value of n
99
Sum = 1.000001

Process returned 0 (0x0)   execution time : 3.562 s
Press any key to continue.
*/
