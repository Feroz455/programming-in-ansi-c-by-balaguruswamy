/**
page 424
program 13.2
Write a program to store a character string in a block of memory
space created by malloc and the modify the same to store a larger string
*/

///program begin
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

//main() function begin

int main(int argc,char *argv[])
{
    char *buffer;
    /* Allocating memory*/
    if((buffer = (char *) malloc(10)) == NULL)
    {
        printf("malloc failed\n");
        exit(1);
    }
    printf("Buffer of size %d created\n",_msize(buffer));
    strcpy(buffer,"HYDERABAD");
    printf("\nBuffer contains: %s \n",buffer);
    /*Relocation*/
    if((buffer == (char *) realloc(buffer, 15)) == NULL)
    {
        printf("Relocation failed\n");
        exit(1);
    }
    printf("Buffer of size %d modify\n",_msize(buffer));
    printf("\nBuffer size modified.\n\n");
    printf("\nBuffer still contains: %s\n",buffer);
    strcpy(buffer,"SECUNDERABAD");
    printf("\nBuffer now contain: %s \n",buffer);

    /**Free memory*/
    free(buffer);
	getch();
	return 0;
}
///main() end

///program end

/**
output

*/
