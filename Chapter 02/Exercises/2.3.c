/**
2.3 Program exercises
write a program that prints the even number from 1 to 100
**/

///program begin

#include<stdio.h>

///main function begin

int main()
{
    int i;
    ///loop begin
    for(i = 1 ; i <= 100; i++)
    {

        ///checking number divide by zero if zero then print other wise skip
        if(i%2 == 0)
            printf("%d   ",i);

        ///for new line ....without new line it looks ugly
        if(i%20 == 0)
            printf("\n");
    }
    ///loop end
}
///main function end
///program end
/**
output
2   4   6   8   10   12   14   16   18   20
22   24   26   28   30   32   34   36   38   40
42   44   46   48   50   52   54   56   58   60
62   64   66   68   70   72   74   76   78   80
82   84   86   88   90   92   94   96   98   100

Process returned 0 (0x0)   execution time : 0.062 s
Press any key to continue.
**/
