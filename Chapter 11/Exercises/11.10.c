/**
page 394
programming Exercises 11.10
11.10 Write a function (using pointer parameter) that compare two integer arrays to see whether
they are identical.The function returns 1 if they are identical , 0 otherwise.
*/

///program begin
#include<stdio.h>
#include<conio.h>
int compare(int *a, int *b, int len);
void print(int *a);
//main() function begin

int main()
{
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    int array2[10] = {1,2,3,4,5,6,7,8,9,10};
    print(array);
    print(array2);

    if(compare(array2,array,10))
    {
        printf("Array are same\n");
    }
    else
        printf("Array are Not same\n");

	getch();
	return 0;
}
///main() end
int compare(int *a, int *b, int len)
{
    int i;
    for(i = 0 ; i < len; i++)
    {
        if(*(a+i) != *(b+i))
            return(0);
    }
    return(1);
}
///program end
void print(int *a)
{
    printf("\n\n");
    int i;
    for(i = 0; i < 10; i++)
    {
        printf("%4d",*(a+i));
    }
     printf("\n\n");
}
/**
output


   0   2   3   4   5   6   7   8   9  10



   1   2   3   4   5   6   7   8   9  10

Array are Not same


   1   2   3   4   5   6   7   8   9  10



   1   2   3   4   5   6   7   8   9  10

Array are same

*/
