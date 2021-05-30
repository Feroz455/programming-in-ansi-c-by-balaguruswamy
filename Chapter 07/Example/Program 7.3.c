/**
page 201
program 7.3
The program shows in fig 7.3 shows the algorithm flowchart and the complete C program to find the two's complement
of a binary number
*/
/**
***********Algorithm************
Algorithm
Step 1 – Start
Step 2 – Read a binary number string (a[])
Step 3 – Calculate the length of string str (len)
Step 4 – Initialize the looping counter k=0
Step 5 – Repeat Steps 6-8 while a[k] != ‘\0’
Step 6 – If a[k]!= 0 AND a[k]!= 1 goto Step 7 else goto Step 8
Step 7 – Display error “Incorrect binary number format” and terminate the program
Step 8 – k = k + 1
Step 9 – Initialize the looping counter i = len - 1
Step 10 – Repeat Step 11 while a[i]!=’1’
Step 11 – i = i - 1
Step 12 – Initialize the looping counter j = i - 1
Step 13 – Repeat Step 14-17 while j >= 0
Step 14 – If a[j]=1 goto Step 15 else goto Step 16
Step 15 – a[j]=’0’
Step 16 – a[j]=’1’
Step 17 – j = j - 1
Step 18 – Display a[] as the two’s compliment
Step 19 – Stop
*/

/**

void    *memccpy(void *, const void *, int, size_t);
void    *memchr(const void *, int, size_t);
int      memcmp(const void *, const void *, size_t);
void    *memcpy(void *, const void *, size_t);
void    *memmove(void *, const void *, size_t);
void    *memset(void *, int, size_t);
char    *strcat(char *, const char *);
char    *strchr(const char *, int);
int      strcmp(const char *, const char *);
int      strcoll(const char *, const char *);
char    *strcpy(char *, const char *);
size_t   strcspn(const char *, const char *);
char    *strdup(const char *);
char    *strerror(int);
size_t   strlen(const char *);
char    *strncat(char *, const char *, size_t);
int      strncmp(const char *, const char *, size_t);
char    *strncpy(char *, const char *, size_t);
char    *strpbrk(const char *, const char *);
char    *strrchr(const char *, int);
size_t   strspn(const char *, const char *);
char    *strstr(const char *, const char *);
char    *strtok(char *, const char *);
char    *strtok_r(char *, const char *, char **);
size_t   strxfrm(char *, const char *, size_t);
*/
///program begin
#include<stdio.h>
#include<conio.h>
#include<string.h>

//main() function begin

int main()
{
    char a[16];
    int i,j,k,len;

    printf("Enter a binary number: ");
    gets(a);

    len = strlen(a);

    for( k = 0; a[k] != '\0'; k++)
    {
        if(a[k] != '0'&& a[k] != '1')
            printf("\nICOREECT BAINARY FORMET!!!...program will quit");
        getch();
        exit();
    }
    for(i = len-1; a[i] != 1; i++);

	getch();
	return 0;
}
///main() end

///program end

/**
output

*/

