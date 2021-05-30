/**

*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    int M[5][6], S[5][6],C[6],
    Mvalue[5][6],Svalue[5][6],
    Mweek[5], Sweek[5], Mproduct[6], Sproduct[6],
    Mtotal, Stotal, i,j,number;

    ///Input data

    printf("Enter product manufacture week_wise \n");

    printf("M11,M12,---M21,M22,---,M31,M32,---etc\n\n");
    for(i = 1; i <=4; i++)
        for(j = 1; j <= 5; j++)
    {
        scanf("%d",&M[i][j]);
    }

    printf("Enter Product sold week_wise\n\n");

    printf("S11,S12,---,S21,S22,--S31,S32,--etc\n");

     for(i = 1; i <= 4; i++)
        for(j = 1; j <= 5; j++)
    {
        scanf("%d",&S[i][j]);
    }
    printf("Enter cost of each product\n\n");
    for(i=1; i<=5; i++)
        scanf("%d",&C[i]);

    ///Value matrix of production and sales
     for(i = 1; i <= 4; i++)
        for(j = 1; j <= 5; j++)
    {
        Mvalue[i][j] = M[i][j] * C[j];
        Svalue[i][j] = S[i][j] * C[j];
    }

    ///Total value of weekly production and sales

     for(i = 1; i <= 4; i++)
     {
         Mweek[i] = 0;
         Sweek[i] = 0;
            for(j = 1; j <= 5; j++)
            {
           Mweek[i] += Mvalue[i][j];
           Sweek[i] += Svalue[i][j];
            }
     }
     ///monthly value of product_wise production and sales

    for(j = 1; j <= 5; j++)
    {
        Mproduct[j] = 0;
        Sproduct[j] = 0;
        for(i = 1; i <= 4; i++)
        {
            Mproduct[j] += Mvalue[i][j];
            Sproduct[j] += Svalue[i][j];
        }
    }
    ///grand total of production and sales values

    Mtotal = Stotal = 0;
    for(i = 1; i<= 4; i++)
    {
        Mtotal += Mweek[i];
        Stotal += Sweek[i];
    }



    ///Selection and printing of information required
    //***********************************************

    printf("\n\n");


    printf(" Following is the list of things you can \n");
    printf("request for. Enter appropriate item number \n");
    printf("and press RETURN Key\n\n");
    printf("1.Value matrices of production & sales \n");
    printf("2.Total value of weekly production & sales \n");
    printf("3.Product_wise monthly value of production &");
    printf("sales\n");
    printf("4.Grand total value of production & sales\n");
    printf("5.Exit\n");



    number = 0;
    while(1)
    {
        ///begin of while loop
        printf("\n\nENTER YOUR CHOICE\n");
        scanf("%d",&number);
        printf("\n");
        if(number == 5)
        {
            printf("GOOD BYE\n\n");
            break;
        }
        switch(number)
        {
            ///begin of switch
            ///VALUE MATRIES
        case 1:
            printf("VALUE MATRIX OF PRODUCTON\n\n");
            for(i = 1; i <= 4; i++)
            {
                printf("Week(%d)\t",i);
                for(j = 1; j <= 5; j++)
                {
                    printf("%7d",Mvalue[i][j]);

                }
                 printf("\n");
            }
            printf("VALUE MATRIX OF SALES\n\n");
            for(i = 1; i <= 4; i++)
            {
                printf("Week(%d)\t",i);
                for(j = 1; j <= 5; j++)
                {
                    printf("%7d",Svalue[i][j]);

                }
                 printf("\n");
            }
            break;

            ///Weekly ANALYSIS

        case 2:
            printf("TOTAL WEEKLY PRODUCTION & SALES\n\n");
            printf("              PRODUCTION & SALES\n");
            printf("              --------      --\n");

            for(i = 1; i <= 4; i++)
            {
                printf("Week(%d)\t",i);
                printf("%7d\t%7d\n",Mweek[i],Sweek[i]);
            }
            break;
        case 3:
            printf("Product_wise TOTAL PRODUCTION & SALES\n\n");
            printf("              PRODUCTION & SALES\n");
            printf("                --------      --\n");
            for(j = 1; j <= 5; j++)
            {
                printf("Produc(%d)\t",j);
                printf("%7d\t%7d\n",Mproduct[j],Sproduct[j]);

            }
            break;
            ///Grand total
        case 4:
            printf("GRAND TOTAL OF PRODUCTION & SALES\n");
            printf("\nTOTAL production = %d\n",Mtotal);
            printf("Total sales = %d\n",Stotal);
            break;
        default:
            printf("Wrong choice, Select again \n\n");
            break;

        }
        ///end switch


    }
    ///end while loop
	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter product manufacture week_wise
M11,M12,---M21,M22,---,M31,M32,---etc

11 15 12 14 13
13 13 14 15 12
12 16 10 15 14
14 11 15 13 12
Enter Product sold week_wise

S11,S12,---,S21,S22,--S31,S32,--etc
10 13 9 12 11
12 10 12 14 10
11 14 10 14 12
12 10 13 11 10
Enter cost of each product

10 20 30 15 25


 Following is the list of things you can
request for. Enter appropriate item number
and press RETURN Key

1.Value matrices of production & sales
2.Total value of weekly production & sales
3.Product_wise monthly value of production &sales
4.Grand total value of production & sales
5.Exit


ENTER YOUR CHOICE
1

VALUE MATRIX OF PRODUCTON

Week(1)     110    300    360    210    325
Week(2)     130    260    420    225    300
Week(3)     120    320    300    225    350
Week(4)     140    220    450    195    300
VALUE MATRIX OF SALES

Week(1)     100    260    270    180    275
Week(2)     120    200    360    210    250
Week(3)     110    280    300    210    300
Week(4)     120    200    390    165    250


ENTER YOUR CHOICE
2

TOTAL WEEKLY PRODUCTION & SALES

              PRODUCTION & SALES
              --------      --
Week(1)    1305    1085
Week(2)    1335    1140
Week(3)    1315    1200
Week(4)    1305    1125


ENTER YOUR CHOICE
3

Product_wise TOTAL PRODUCTION & SALES

              PRODUCTION & SALES
                --------      --
Produc(1)           500     450
Produc(2)          1100     940
Produc(3)          1530    1320
Produc(4)           855     765
Produc(5)          1275    1075


ENTER YOUR CHOICE
4

GRAND TOTAL OF PRODUCTION & SALES

TOTAL production = 5260
Total sales = 4550


ENTER YOUR CHOICE
5

GOOD BYE


Process returned 0 (0x0)   execution time : 77.902 s
Press any key to continue.
*/
