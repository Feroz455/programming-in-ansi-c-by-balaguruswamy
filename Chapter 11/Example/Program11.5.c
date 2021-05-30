/**
page 374
program 11.5

*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    char *name;
    int length;
     name  = "DHAKA";
    char *cptr = name;

    printf("%s\n",cptr);
    while(*cptr != '\0')
    {
        printf("%c is stored at address %u\n",*cptr, cptr);
        cptr++;
    }
    length = cptr - name;
    printf("\nLength of the string = %d\n",length);
	getch();
	return 0;
}
///main() end

///program end

/**
output

*/
