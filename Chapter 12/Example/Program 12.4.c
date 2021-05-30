/**
page 405
program 12.4
Write a program to illustrate error handling in file operation
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    char filename[20];
    FILE *fp1 ,*fp2;

    int i, number;

    fp1 = fopen("test", "w");
    for(i = 0; i <= 100; i += 10)
    {
        putw(i,fp1);
    }
    fclose(fp1);


    printf("\nInput filename\n");

    open_file:

        scanf("%s",filename);



    if((fp2 = fopen(filename, "r")) == NULL )
    {
        printf("Cannot open the file\n\n");
        printf("Type filename Again.\n\n");
        goto open_file;
    }
    else
        for(i = 0; i <= 20; i++)
    {
        number = getw(fp2);
        if(feof(fp2))
        {
            printf("\nRan out of data\n");
            break;
        }
        else
            printf("\n%d\n",number);

    }
    fclose(fp2);

	getch();
	return 0;
}
///main() end

///program end

/**
output

*/
