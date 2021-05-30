/**
page 415
program 12.8
Write a program that will receive a file name and a line of text as command line
argument and write the text to the file

*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

void main(int argc, char *argv[])
{
    FILE *fp;
    int i;
    char word[15];
    fp = fopen(argv[1], "w");
    printf("\nNo of argument in command line = %d\n\n",argc);
    for(i = 2; i < argc; i++)
        fprintf(fp, "%s ",argv[i]);
    fclose(fp);

    ///Writing content of the file to screen

    printf("Content of %s file\n\n",argv[1]);
    fp = fopen(argv[1] , "r");
    for(i = 2; i < argc; i++)
    {
        fscanf(fp, "%s",word);
        fprintf(stdout, "%s", word);
    }

    fclose(fp);
    fprintf(stdout,"\n\n");

    /// Writing the argument from memory

    for(i = 0; i < argc; i++)
    {
        printf("%*s \n",i*5, argv[i]);
    }
	getch();

}
///main() end

///program end

/**
output
C:\Users\SUPERSONIC\Desktop\Cprogramming\cProgramming\Chapter 12\Example>gcc "Program 12.8.c"
Program 12.8.c: In function 'main':
Program 12.8.c:46:9: warning: 'return' with a value, in function returning void
  return 0;
         ^
Program 12.8.c:15:6: note: declared here
 void main(int argc, char *argv[])
      ^~~~

C:\Users\SUPERSONIC\Desktop\Cprogramming\cProgramming\Chapter 12\Example>gcc "Program 12.8.c"

C:\Users\SUPERSONIC\Desktop\Cprogramming\cProgramming\Chapter 12\Example>color

C:\Users\SUPERSONIC\Desktop\Cprogramming\cProgramming\Chapter 12\Example>"program 12.8" TEXT AAAAAA BBBBBB CCCCCC DDDDDD EEEEEE FFFFFF GGGGG

No of argument in command line = 9

Content of TEXT file

AAAAAABBBBBBCCCCCCDDDDDDEEEEEEFFFFFFGGGGG

program 12.8
 TEXT
    AAAAAA
         BBBBBB
              CCCCCC
                   DDDDDD
                        EEEEEE
                             FFFFFF
                                   GGGGG
*/
