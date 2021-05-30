
/**
page 418
program 12.1
12.1 Write a program to copy the contents of one file into another.
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main(int argc,char *argv[])
{
    char filename1[10];
    char filename2[10],c;
    FILE *fp , *fp1;

    fprintf(stdout, "Enter First File name\n");
    scanf("%s",filename1);
    getchar();

    fprintf(stdout, "Enter Second File name\n");
    scanf("%s",filename2);
    getchar();

    fprintf(stdout,"%s %s\n\n\n",filename1, filename2);



    fp = fopen(filename1, "w");//Open filename1 write mode

    while((c = getchar()) != EOF)
    {
        putc(c,fp);
    }
    fclose(fp);///close filename1
    fp = fopen(filename1, "r");///Open filename1 read mode
    fp1 = fopen(filename2, "w");///Open filename2 in write mode



     while((c = getc(fp)) != EOF)
    {
        putc(c,fp1);
    }


    fclose(fp); ///close file
    fclose(fp1);


    printf("From second File\n");///reading data from copy file .
    fp1 = fopen(filename2, "r");
     while((c = getc(fp1)) != EOF)
    {
        printf("%c",c);
    }
	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter First File name
Text.txt
Enter Second File name
Hello.txt
Text.txt Hello.txt


Hello Bangladesh. Hello Dhaka Gooooooooood morning
^Z
From second File
Hello Bangladesh. Hello Dhaka Gooooooooood morning

Process returned 0 (0x0)   execution time : 39.904 s
Press any key to continue.
*/
