/**
2.6 Program Exercises
Write a program to count and print the number of negative and positive numbers in a given set
of numbers.Test your program with a suitable set of numbers.Use scanf to read the numbers.
Reading should be terminated when the value 0 is encountered
*/

//program begin

#include<stdio.h>

///main function begin

int main()
{
    int number, positive = 0, negativ = 0;

    while(1)
    {

        printf("Enter a value to check it positive or negative\n");
        scanf("%d",&number);
        if(number == 0)
            break;
        if(number > 0)
        {
            printf("positive \n");
            positive++;
        }
        else
        {
            printf("negative\n");
            negativ++;
        }

    }
    ///loop break
    printf("\n\nTotal positive number = %d\n",positive);
    printf("Total negative number = %d\n", negativ);
    printf("------------------------------------\n");
    printf("You have enter  total %d numbers\n",positive+negativ);

}
//main end

/**
Enter a value to check it positive or negative
15
positive
Enter a value to check it positive or negative
98
positive
Enter a value to check it positive or negative
-98
negative
Enter a value to check it positive or negative
45
positive
Enter a value to check it positive or negative
-98
negative
Enter a value to check it positive or negative
-5
negative
Enter a value to check it positive or negative
-65
negative
Enter a value to check it positive or negative
45
positive
Enter a value to check it positive or negative
65
positive
Enter a value to check it positive or negative
-98
negative
Enter a value to check it positive or negative
0


Total positive number = 5
Total negative number = 5
------------------------------------
You have enter  total 10 numbers

Process returned 0 (0x0)   execution time : 21.233 s
Press any key to continue.
*/
