/**
page 394
programming Exercises 11.4
11.4 Write a function using pointers to add two matrices and to return the resultant
matrix to the calling function
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{


    int length = 4;
        int a[4][4] = { {1,2,3,4},
                         {5,6,7,8},
                         {9,10,11,12},
                         {13,14,15,16} };

    sumOfMatrix(a,length);

	getch();
	return 0;
}
///main() end
void sumOfMatrix(int *array, int len)
{
    int i, j, k, (*ptr)[len] = array;

    printf("Sum of the matrix\n");

    for(i = 0; i < len; i++)
    {
        for( j = 0; j < len; j++)
        {
            printf("%d ",*(*(ptr+i)+j) + *(*(ptr+i)+j) ); ///-_- Every thing done here
        }
        printf("\n");
    }
}

///program end

/**
output

*/
