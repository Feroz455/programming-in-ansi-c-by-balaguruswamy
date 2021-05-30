/**
page 268
program 8.1
Write a program,which reads your name from the keyboard and outputs a list of ASCII codes
which represent your name;
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    char name[20],c;
    int i;
    while((c = getchar() ) != '\n')
    {
        name[i] = c;
        printf("%d ",name[i]);
    }
	getch();
	return 0;
}
///main() end

///program end

/**
output
Sayyid Mohammad firoz mahmud
83 97 121 121 105 100 32 77 111 104 97 109 109 97 100 32 102 105 114 111 122 32 109 97 104 109 117 100
Process returned 0 (0x0)   execution time : 40.649 s
Press any key to continue.
*/
