/**
page 252
program 8.8
The names of employees of an organization are store in three array,
namely first_name, second_name, and last_name.
Write a program to concatenate the three parts into one string into one string to be called name
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    int i,j,k;

    char first_name[10] = "Sayyid";
    char second_name[10] = "Firoz";
    char  last_name[10] = "Mahmud";
    char name[30];



    /// copy first name into name

    for(i = 0; first_name[i] != '\0'; i++)
    {
        name[i] = first_name[i];
    }
    name[i] = ' ';

    /// copy second name into name
    for(j = 0; second_name[j] != '\0'; j++)
    {
        name[i+j+1] = second_name[j];
    }
    name[i+j+1] = ' ';

    /// copy last name into name
    for(k = 0; last_name[k] != '\0'; k++)
    {
        name[i+j+k+2] = last_name[k];
    }
    name[i+j+k+2] = '\0';
    puts(name);
	getch();
	return 0;
}
///main() end

///program end

/**
output
Sayyid Firoz Mahmud

Process returned 0 (0x0)   execution time : 0.078 s
Press any key to continue.
*/
