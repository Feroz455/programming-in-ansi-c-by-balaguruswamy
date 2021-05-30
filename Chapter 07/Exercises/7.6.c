/**
page 235
Program 7.6
Given are one dimensional Array A, B which are store in ascending order.
Write s program to merge them into a single sorted array C that contains every item from
A and B in ascending order
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{

    int i, j , k;
    int A[10],B[10],M[20];

    ///reading number into Array A
    for(i = 0; i < 10; i++)
    {
        scanf("%d",&A[i]);
    }
    ///Reading number into array B
     for(i = 0; i < 10; i++)
    {
        scanf("%d",&B[i]);
    }
    ///Marching Array A and
    for(i = 0; i <= 20; i++)
    {
        if(i <= 10)
            M[i] = A[i];
        else
            M[i] = B[i-10];
    }

    ///sorting array
    int n = 20;
    for(i = 0; i < n; i++)
    {
        for(j = 1 ; j < n-i; j++ )
        {
            if(M[j] < M[j-1])
            {
            k = M[j];
            M[j] = M[j-1];
            M[j-1] = k;
            }
        }
    }
    ///Printing Array
    printf("Sorted Array \n");
    for(i = 0; i < n; i++)
    {
        printf("%4d",M[i]);
    }
	getch();
	return 0;
}
///main() end

///program end

/**
output
78
26 13 19 97 84 58 17 57 47 86
24 16 67 99 28 79 56 85 40
Sorted Array
  13  16  17  19  24  26  28  40  47  56  57  58  67  78  79  84  85  94  97  99
*/
