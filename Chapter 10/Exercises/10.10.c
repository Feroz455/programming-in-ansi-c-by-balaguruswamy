/**
page 356
programing exercises 10.10
10.10) Add a function to the program of exercises 10.9 that accepts two vector as input parameter and return
the addition of two vectors
*/

///program begin
#include<stdio.h>
#include<conio.h>
#include"vector.h"
int addition2(struct vector a, struct vector b);
//main() function begin

int main()
{
    struct vector a, b;
    int sum = 0;


    printNewLine();
    printf("Here is two vector you are currently Working With \"FIRST\"Vector\n");
    printLine();
    displayMassage();
    printMainMenu();
    a = choice(a);

    printNewLine();
    printf("Here is two vector you are currently Working With \"SECOND\" Vector\n");
    printLine();
    displayMassage();
    printMainMenu();
    b = choice(b);

    sum = addition2(a,b);

    printf("Sum of two vector = %d\n",sum);




	getch();
	return 0;
}
///main() end


int addition2(struct vector a, struct vector b)
{
    int i,sum;
    for(i = 0; i < a.len; i++)
    {
        sum = a.array[i];
    }
    for(i = 0; i < b.len; i++)
    {
        sum = b.array[i];
    }
    return(sum);
}
///program end

/**
output
Here is two vector you are currently Working With "FIRST"Vector
________________________________________________________________________
VECTOR STRUCT TO HOLD, DISPLAY, MANIPULATE INTEGER ELEMENTS



*** STRUCT-VEC MAIN MENU ***
Valid Choices:
        1: MAKE A NEW VECTOR ARRY
        2: ENTER new vector at the end of the vector array
        3: UPDATE all vector elements
        4: UPDATE Single vector elements
        5: MULTIPLY vector with a scalar value
        6: DISPLAY the vector
        7: Return vector to main function
        8: EXIT program
Enter your choice: 1
        1: MAKE A NEW VECTOR ARRY
Enter the elements of vector -1 to quit
1
4
7
4
-1



*** STRUCT-VEC MAIN MENU ***
Valid Choices:
        1: MAKE A NEW VECTOR ARRY
        2: ENTER new vector at the end of the vector array
        3: UPDATE all vector elements
        4: UPDATE Single vector elements
        5: MULTIPLY vector with a scalar value
        6: DISPLAY the vector
        7: Return vector to main function
        8: EXIT program
Enter your choice: 7

7




















Here is two vector you are currently Working With "SECOND" Vector
________________________________________________________________________
VECTOR STRUCT TO HOLD, DISPLAY, MANIPULATE INTEGER ELEMENTS



*** STRUCT-VEC MAIN MENU ***
Valid Choices:
        1: MAKE A NEW VECTOR ARRY
        2: ENTER new vector at the end of the vector array
        3: UPDATE all vector elements
        4: UPDATE Single vector elements
        5: MULTIPLY vector with a scalar value
        6: DISPLAY the vector
        7: Return vector to main function
        8: EXIT program
Enter your choice: 1
        1: MAKE A NEW VECTOR ARRY
Enter the elements of vector -1 to quit
4
7
55
8
-1



*** STRUCT-VEC MAIN MENU ***
Valid Choices:
        1: MAKE A NEW VECTOR ARRY
        2: ENTER new vector at the end of the vector array
        3: UPDATE all vector elements
        4: UPDATE Single vector elements
        5: MULTIPLY vector with a scalar value
        6: DISPLAY the vector
        7: Return vector to main function
        8: EXIT program
Enter your choice: 7
7
Sum of two vector = 8

*/
