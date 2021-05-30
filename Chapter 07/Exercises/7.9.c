/**
page 235
program 7.9
Selection sort is based on the following idea

Selecting the largest array element and swapping it with the last array element
leaves an unsorted list whose size is 1 less than the size of the original list.
if we repeat this step again on the unsorted list we will have an order list of
size 2 and an unordered list size n -2 when we repeat this until the size of the
unsorted list become one . the result be a sorted list ;

*/

/**
sorting array
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    int n,i,t,j,k;
    printf("how many number you want to enter into your array ??\n");
    scanf("%d",&n);
    printf("Enter your Numbers\n");
    int Array[n];
    //putting array into array
    for(i = 0 ; i < n; i++)
    {
        scanf("%d",&Array[i]);
    }

    ///sorting array;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            //checking condition
            if (Array[i] < Array[j])
            {
                ///debuging perpase
                 printf("\nArray[%d] = %d < Array[%d] %d\t",i,Array[i], j , Array[j]);

            ///inter changing number place into array
                t = Array[i];
            Array[i] = Array[j];
            Array[j] = t;
            ///debuging perpase this section
            printf("Array[%d] = %d \t\t",i,Array[i]);

             for(k = 0 ; k < n; k++)
                {
                   printf("%4d",Array[k]);
                }
                printf("\n");

            }
            else continue;

        }
    }
    ///printing  array
    printf("\n\n");
    for(i = 0 ; i < n; i++)
    {
       printf("%4d",Array[i]);
    }

    ///sorting


	getch();
	return 0;
}
///main() end

///program end

/**
output
how many number you want to enter into your array ??
20
Enter your Numbers
4 15 10 6 14 19 18 11 16 11 10 15 18 14 17 11 9 18 16 8

Array[0] = 4 < Array[1] 15      Array[0] = 15             15   4  10   6  14  19  18  11  16  11  10  15  18  14  17  11   9  18  16   8

Array[0] = 15 < Array[5] 19     Array[0] = 19             19   4  10   6  14  15  18  11  16  11  10  15  18  14  17  11   9  18  16   8

Array[1] = 4 < Array[0] 19      Array[1] = 19              4  19  10   6  14  15  18  11  16  11  10  15  18  14  17  11   9  18  16   8

Array[2] = 10 < Array[1] 19     Array[2] = 19              4  10  19   6  14  15  18  11  16  11  10  15  18  14  17  11   9  18  16   8

Array[3] = 6 < Array[1] 10      Array[3] = 10              4   6  19  10  14  15  18  11  16  11  10  15  18  14  17  11   9  18  16   8

Array[3] = 10 < Array[2] 19     Array[3] = 19              4   6  10  19  14  15  18  11  16  11  10  15  18  14  17  11   9  18  16   8

Array[4] = 14 < Array[3] 19     Array[4] = 19              4   6  10  14  19  15  18  11  16  11  10  15  18  14  17  11   9  18  16   8

Array[5] = 15 < Array[4] 19     Array[5] = 19              4   6  10  14  15  19  18  11  16  11  10  15  18  14  17  11   9  18  16   8

Array[6] = 18 < Array[5] 19     Array[6] = 19              4   6  10  14  15  18  19  11  16  11  10  15  18  14  17  11   9  18  16   8

Array[7] = 11 < Array[3] 14     Array[7] = 14              4   6  10  11  15  18  19  14  16  11  10  15  18  14  17  11   9  18  16   8

Array[7] = 14 < Array[4] 15     Array[7] = 15              4   6  10  11  14  18  19  15  16  11  10  15  18  14  17  11   9  18  16   8

Array[7] = 15 < Array[5] 18     Array[7] = 18              4   6  10  11  14  15  19  18  16  11  10  15  18  14  17  11   9  18  16   8

Array[7] = 18 < Array[6] 19     Array[7] = 19              4   6  10  11  14  15  18  19  16  11  10  15  18  14  17  11   9  18  16   8

Array[8] = 16 < Array[6] 18     Array[8] = 18              4   6  10  11  14  15  16  19  18  11  10  15  18  14  17  11   9  18  16   8

Array[8] = 18 < Array[7] 19     Array[8] = 19              4   6  10  11  14  15  16  18  19  11  10  15  18  14  17  11   9  18  16   8

Array[9] = 11 < Array[4] 14     Array[9] = 14              4   6  10  11  11  15  16  18  19  14  10  15  18  14  17  11   9  18  16   8

Array[9] = 14 < Array[5] 15     Array[9] = 15              4   6  10  11  11  14  16  18  19  15  10  15  18  14  17  11   9  18  16   8

Array[9] = 15 < Array[6] 16     Array[9] = 16              4   6  10  11  11  14  15  18  19  16  10  15  18  14  17  11   9  18  16   8

Array[9] = 16 < Array[7] 18     Array[9] = 18              4   6  10  11  11  14  15  16  19  18  10  15  18  14  17  11   9  18  16   8

Array[9] = 18 < Array[8] 19     Array[9] = 19              4   6  10  11  11  14  15  16  18  19  10  15  18  14  17  11   9  18  16   8

Array[10] = 10 < Array[3] 11    Array[10] = 11             4   6  10  10  11  14  15  16  18  19  11  15  18  14  17  11   9  18  16   8

Array[10] = 11 < Array[5] 14    Array[10] = 14             4   6  10  10  11  11  15  16  18  19  14  15  18  14  17  11   9  18  16   8

Array[10] = 14 < Array[6] 15    Array[10] = 15             4   6  10  10  11  11  14  16  18  19  15  15  18  14  17  11   9  18  16   8

Array[10] = 15 < Array[7] 16    Array[10] = 16             4   6  10  10  11  11  14  15  18  19  16  15  18  14  17  11   9  18  16   8

Array[10] = 16 < Array[8] 18    Array[10] = 18             4   6  10  10  11  11  14  15  16  19  18  15  18  14  17  11   9  18  16   8

Array[10] = 18 < Array[9] 19    Array[10] = 19             4   6  10  10  11  11  14  15  16  18  19  15  18  14  17  11   9  18  16   8

Array[11] = 15 < Array[8] 16    Array[11] = 16             4   6  10  10  11  11  14  15  15  18  19  16  18  14  17  11   9  18  16   8

Array[11] = 16 < Array[9] 18    Array[11] = 18             4   6  10  10  11  11  14  15  15  16  19  18  18  14  17  11   9  18  16   8

Array[11] = 18 < Array[10] 19   Array[11] = 19             4   6  10  10  11  11  14  15  15  16  18  19  18  14  17  11   9  18  16   8

Array[12] = 18 < Array[11] 19   Array[12] = 19             4   6  10  10  11  11  14  15  15  16  18  18  19  14  17  11   9  18  16   8

Array[13] = 14 < Array[7] 15    Array[13] = 15             4   6  10  10  11  11  14  14  15  16  18  18  19  15  17  11   9  18  16   8

Array[13] = 15 < Array[9] 16    Array[13] = 16             4   6  10  10  11  11  14  14  15  15  18  18  19  16  17  11   9  18  16   8

Array[13] = 16 < Array[10] 18   Array[13] = 18             4   6  10  10  11  11  14  14  15  15  16  18  19  18  17  11   9  18  16   8

Array[13] = 18 < Array[12] 19   Array[13] = 19             4   6  10  10  11  11  14  14  15  15  16  18  18  19  17  11   9  18  16   8

Array[14] = 17 < Array[11] 18   Array[14] = 18             4   6  10  10  11  11  14  14  15  15  16  17  18  19  18  11   9  18  16   8

Array[14] = 18 < Array[13] 19   Array[14] = 19             4   6  10  10  11  11  14  14  15  15  16  17  18  18  19  11   9  18  16   8

Array[15] = 11 < Array[6] 14    Array[15] = 14             4   6  10  10  11  11  11  14  15  15  16  17  18  18  19  14   9  18  16   8

Array[15] = 14 < Array[8] 15    Array[15] = 15             4   6  10  10  11  11  11  14  14  15  16  17  18  18  19  15   9  18  16   8

Array[15] = 15 < Array[10] 16   Array[15] = 16             4   6  10  10  11  11  11  14  14  15  15  17  18  18  19  16   9  18  16   8

Array[15] = 16 < Array[11] 17   Array[15] = 17             4   6  10  10  11  11  11  14  14  15  15  16  18  18  19  17   9  18  16   8

Array[15] = 17 < Array[12] 18   Array[15] = 18             4   6  10  10  11  11  11  14  14  15  15  16  17  18  19  18   9  18  16   8

Array[15] = 18 < Array[14] 19   Array[15] = 19             4   6  10  10  11  11  11  14  14  15  15  16  17  18  18  19   9  18  16   8

Array[16] = 9 < Array[2] 10     Array[16] = 10             4   6   9  10  11  11  11  14  14  15  15  16  17  18  18  19  10  18  16   8

Array[16] = 10 < Array[4] 11    Array[16] = 11             4   6   9  10  10  11  11  14  14  15  15  16  17  18  18  19  11  18  16   8

Array[16] = 11 < Array[7] 14    Array[16] = 14             4   6   9  10  10  11  11  11  14  15  15  16  17  18  18  19  14  18  16   8

Array[16] = 14 < Array[9] 15    Array[16] = 15             4   6   9  10  10  11  11  11  14  14  15  16  17  18  18  19  15  18  16   8

Array[16] = 15 < Array[11] 16   Array[16] = 16             4   6   9  10  10  11  11  11  14  14  15  15  17  18  18  19  16  18  16   8

Array[16] = 16 < Array[12] 17   Array[16] = 17             4   6   9  10  10  11  11  11  14  14  15  15  16  18  18  19  17  18  16   8

Array[16] = 17 < Array[13] 18   Array[16] = 18             4   6   9  10  10  11  11  11  14  14  15  15  16  17  18  19  18  18  16   8

Array[16] = 18 < Array[15] 19   Array[16] = 19             4   6   9  10  10  11  11  11  14  14  15  15  16  17  18  18  19  18  16   8

Array[17] = 18 < Array[16] 19   Array[17] = 19             4   6   9  10  10  11  11  11  14  14  15  15  16  17  18  18  18  19  16   8

Array[18] = 16 < Array[13] 17   Array[18] = 17             4   6   9  10  10  11  11  11  14  14  15  15  16  16  18  18  18  19  17   8

Array[18] = 17 < Array[14] 18   Array[18] = 18             4   6   9  10  10  11  11  11  14  14  15  15  16  16  17  18  18  19  18   8

Array[18] = 18 < Array[17] 19   Array[18] = 19             4   6   9  10  10  11  11  11  14  14  15  15  16  16  17  18  18  18  19   8

Array[19] = 8 < Array[2] 9      Array[19] = 9              4   6   8  10  10  11  11  11  14  14  15  15  16  16  17  18  18  18  19   9

Array[19] = 9 < Array[3] 10     Array[19] = 10             4   6   8   9  10  11  11  11  14  14  15  15  16  16  17  18  18  18  19  10

Array[19] = 10 < Array[5] 11    Array[19] = 11             4   6   8   9  10  10  11  11  14  14  15  15  16  16  17  18  18  18  19  11

Array[19] = 11 < Array[8] 14    Array[19] = 14             4   6   8   9  10  10  11  11  11  14  15  15  16  16  17  18  18  18  19  14

Array[19] = 14 < Array[10] 15   Array[19] = 15             4   6   8   9  10  10  11  11  11  14  14  15  16  16  17  18  18  18  19  15

Array[19] = 15 < Array[12] 16   Array[19] = 16             4   6   8   9  10  10  11  11  11  14  14  15  15  16  17  18  18  18  19  16

Array[19] = 16 < Array[14] 17   Array[19] = 17             4   6   8   9  10  10  11  11  11  14  14  15  15  16  16  18  18  18  19  17

Array[19] = 17 < Array[15] 18   Array[19] = 18             4   6   8   9  10  10  11  11  11  14  14  15  15  16  16  17  18  18  19  18

Array[19] = 18 < Array[18] 19   Array[19] = 19             4   6   8   9  10  10  11  11  11  14  14  15  15  16  16  17  18  18  18  19


   4   6   8   9  10  10  11  11  11  14  14  15  15  16  16  17  18  18  18  19
*/
