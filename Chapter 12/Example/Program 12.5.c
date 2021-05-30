/**
page 408
program 12.5
Write a program that uses the functions ftell and fseek.

*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{

    FILE *fp;

    long n;
    char c;

    fp = fopen("RANDOM", "w");
    while((c = getchar()) != EOF)
    {
        putc(c,fp);
    }
    printf("No. Of character entered = %ld\n",ftell(fp));
    fclose(fp);

    fp = fopen("RANDOM", "r");
    n = 0l;
    while(feof(fp) == NULL)
    {
        fseek(fp, n, 0);//Position to (n + 1)th character
        printf("Position of %c is %ld\n",getc(fp),ftell(fp));
        n = n + 5l;

    }
    putchar('\n');

    fseek(fp, -1l, 2);

    while(!fseek(fp, -2L, 1))
    {
        putchar(getc(fp));
    };
    fclose(fp);
	getch();
	return 0;
}
///main() end

///program end

/**
output
ABCDEFGHIJKLMNOPQRSTUVWXYZ
^Z
No. Of character entered = 27
Position of A is 0
Position of F is 5
Position of K is 10
Position of P is 15
Position of U is 20
Position of Z is 25
Position of   is 30

YXWVUTSRQPONMLKJIHGFEDCBA
Process returned 0 (0x0)   execution time : 7.921 s
Press any key to continue.

*/
