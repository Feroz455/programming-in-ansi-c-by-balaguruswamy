/**
page 412
program 12.7
Write a c program to reverse the first n character in a file. The file name and the value
of n are specified on the command line.Incorporate validation of argument that is the program
should check that the number of arguments passed and the value of n that are meaningful.

*/

///program begin
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
//main() function begin
void main(int argc, char *argv[])
{
    FILE *fs;
    char str[100];
    printf("Hello there \n\n");
    printf("argc %d ",argc);
    printf(" argv[1] %s\n",argv[1]);
    printf(" argv[2]  %s\n",argv[2]);
   printf("Hello there \n\n");
    int i , n, j;

    if(argc != 3)///Checking the number of arguments given at command line
    {
        puts("Improper number of argument. ");
        exit(0);
    }

    n = atoi(argv[2]);
    fs = fopen(argv[1], "r"); // Opening the source file in read mode
    if(fs == NULL)
    {
        printf("Source file cannot opened\n");
        exit(0);
    }

    i = 0;

    while(1)
    {
        if(str[i] = fgetc(fs) != EOF)// Reading content of a file character by character
            j = i + 1;
        else
            break;
    }
    fclose(fs);

    fs = fopen(argv[1], "w");///opening the file in write mode
    if(n < 0 || n > strlen(str))
    {
        printf("Incorrect Value of n. Program Will terminate...\n\n");
        getch();
        exit(1);
    }
    j = strlen(str);
    for( i = 0; i <= n; i++)
    {
        fputc(str[j],fs);
        j--;
    }
    fclose(fs);

    printf("\n%d characters of the file successfully printed in revers order",n);

	getch();

}

///main() end

///program end

/**
output

*/
