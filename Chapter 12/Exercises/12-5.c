/**
page 418
program 12.5
12.5 Write a program that reads a file containing integer and appends at its end the sum of all the integer;
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main(int argc,char *argv[])
{
    FILE *fp;
    int number,sum = 0;

    fp = fopen("integer", "w");
    printf("Enter integer Number\n\n -1 to end entry\n\n");
    scanf("%d",&number);

    while((number != -1))
    {
        putw(number,fp);
        sum += number;
        scanf("%d",&number);
    }
    fclose(fp);


    fp = fopen("integer", "a+");
    putw(sum, fp);
    fclose(fp);


    fp = fopen("integer", "r");
    while((number = getw(fp)) != EOF)
    {
        printf("%d\t",number);
    }
    fclose(fp);
	getch();
	return 0;
}
///main() end

///program end

/**
output
 -1 to end entry

1
4
7
8
5
2
3
6
9

45
5
12
46
78

15

5
31
564
98
7
-1
1       4       7       8       5       2       3       6       9       45      5       12      46      78      15
        5       31      564     98      7       951
*/
