/**
3.12 Write a program to print the size of various data types in C.
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    printf("Size of Integer Data Type   -> %d \n",sizeof(int));
    printf("Size of Character Data Type -> %d \n",sizeof(char));
    printf("Size of Float Data Type     -> %d \n",sizeof(float));
    printf("Size of Double Data Type    -> %d \n",sizeof(double));
    getch();

    return 0;
}
//main() end

///program end

/**
output
Size of Integer Data Type   -> 4
Size of Character Data Type -> 1
Size of Float Data Type     -> 4
Size of Double Data Type    -> 8
*/
