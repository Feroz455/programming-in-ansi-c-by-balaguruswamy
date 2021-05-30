/**
page 400
program 12.2 A file name DATA contains a series of integer number.Code a program to read these numbers and then write
all odd numbers to a file to be called OOD and all Even numbers to a file to be called EVEN


*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    FILE *f1, *f2, *f3;

    int number, i;

    printf("Content of DATA file\n\n");

    f1 = fopen("DATA","w");

    for( i =0; i < 30; i++)
    {
        scanf("%d",&number);
        if(number == -1)
        {
            break;
        }
        putw(number,f1);
    }
 fclose(f1);

    f1 = fopen("DATA", "r");
    f2 = fopen("ODD", "w");
    f3 = fopen("EVEN", "w");

    /*Read data from DATA file*/
    while((number = getw(f1)) != EOF)
    {

        if(number % 2 == 0)
        {
            putw(number, f3); //Write to EVEN file
        }
        else
            putw(number, f2); // Write to ODD file
    }

    fclose(f1);
    fclose(f2);
    fclose(f3);

    f2 = fopen("ODD", "r");
    f3 = fopen("EVEN", "r");
    printf("\nContent Of ODD Files\n\n");
    while((number = getw(f2) )!= EOF)
    {
         printf("%4d",number);
    }

printf("\nContent Of Even Files\n\n");
    while((number = getw(f3) )!= EOF)
    {
              printf("%4d",number);
    }


    fclose(f2);
    fclose(f3);

	getch();


	return 0;
}
///main() end

///program end

/**
output
Content of DATA file

46 5 63 65 2 36 42 14 44 59
24 7 17 49 69 48 73 98 16 41
14 73 18 24 35 92 42 45 29 -1

Content Of ODD Files

   5  63  65  59   7  17  49  69  73  41  73  35  45  29
Content Of Even Files

  46   2  36  42  14  44  24  48  98  16  14  18  24  92  42
Process returned 0 (0x0)   execution time : 8.171 s
Press any key to continue.
*/
