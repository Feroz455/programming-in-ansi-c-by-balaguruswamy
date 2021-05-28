//page 20
/*
1.3 write a program uising one print statment to print the pattern of asterisks as showen below
*
*   *
*   *   *
*   *   *   *
*/
#include<stdio.h>

int main()
{
    int i, j;
    //For loop
    //If you are not confortable with loop the use this line instant of loop section
    //printf("*\t\n*\t*\t\n*\t*\t*\t\n*\t*\t*\t*\t\n");
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j <= i; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}
//output
/*
*
*       *
*       *       *
*       *       *       *

Process returned 0 (0x0)   execution time : 0.141 s
Press any key to continue.
*/
