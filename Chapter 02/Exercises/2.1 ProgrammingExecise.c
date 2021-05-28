/**
2.1
Write a program to determine and print the sum of the following harmonic series for a given value of:n
1+1/2+1/3+.....+1/n
the value of n should be given interactively through the terminal
**/

///program begin from here

#include<stdio.h>

///main function begin from here

int main()
{

    int n , i ;
    float j = 0;

    printf("Enter Value of N \n");
    scanf("%d",&n);


    ///for loop start from here

    for(i = 1; i <= n; i++)
    {
        //calculating harmonic series
        j += 1/(float)i;


        ///for printing 1 on console
       if(i==1)
        printf("1 + ");
        ///when i == n the need to print only i not plus sing thats why this condition
        else if (i == n)
        {

            printf("1/%d = %.2f\n\n",i,j);
            return;
        }

        ///other wise this condition will run
        ///it will print like 1/2 + 1/3+ 1/4........
        else
            printf("1/%d + ", i);

    }
    ///loop end here

}
//program end here also main function end here

/**
output:-
Enter Value of N
10
1 + 1/2 + 1/3 + 1/4 + 1/5 + 1/6 + 1/7 + 1/8 + 1/9 + 1/10 = 2.93


Process returned 13 (0xD)   execution time : 7.656 s
Press any key to continue.
**/
