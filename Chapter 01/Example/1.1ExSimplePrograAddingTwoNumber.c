//1.4 Simple program 2:Adding two Numbers
//Header File
/*NAME
stdio.h - standard buffered input/output
 SYNOPSIS


#include <stdio.h>

 DESCRIPTION
The <stdio.h> header defines the following macro names as positive integral constant expressions:
BUFSIZ
Size of <stdio.h> buffers.
FILENAME_MAX
Maximum size in bytes of the longest filename string that the implementation guarantees can be opened.
FOPEN_MAX
Number of streams which the implementation guarantees can be open simultaneously. The value will be at least eight.
_IOFBF
Input/output fully buffered.
_IOLBF
Input/output line buffered.
_IONBF
Input/output unbuffered.
L_ctermid
Maximum size of character array to hold ctermid() output.
L_cuserid
Maximum size of character array to hold cuserid() output. (LEGACY)
L_tmpnam
Maximum size of character array to hold tmpnam() output.
SEEK_CUR
Seek relative to current position.
SEEK_END
Seek relative to end-of-file.
SEEK_SET
Seek relative to start-of-file.
TMP_MAX
Minimum number of unique filenames generated by tmpnam(). Maximum number of times an application can call tmpnam() reliably. The value of TMP_MAX will be at least 10,000.
The following macro name is defined as a negative integral constant expression:

EOF
End-of-file return value.
The following macro name is defined as a null pointer constant:

NULL
Null pointer.
The following macro name is defined as a string constant:

P_tmpdir
default directory prefix for tempnam().
The following macro names are defined as expressions of type pointer to FILE:

stderr
Standard error output stream.
stdin
Standard input stream.
stdout
Standard output stream.
The following data types are defined through typedef:

FILE
A structure containing information about a file.
fpos_t
Type containing all information needed to specify uniquely every position within a file.
va_list
As described in <stdarg.h>.
size_t
As described in <stddef.h>.
The following are declared as functions and may also be defined as macros. Function prototypes must be provided for use with an ISO C compiler.


void     clearerr(FILE *);
char    *ctermid(char *);
char    *cuserid(char *);(LEGACY)
int      fclose(FILE *);
FILE    *fdopen(int, const char *);
int      feof(FILE *);
int      ferror(FILE *);
int      fflush(FILE *);
int      fgetc(FILE *);
int      fgetpos(FILE *, fpos_t *);
char    *fgets(char *, int, FILE *);
int      fileno(FILE *);
void     flockfile(FILE *);
FILE    *fopen(const char *, const char *);
int      fprintf(FILE *, const char *, ...);
int      fputc(int, FILE *);
int      fputs(const char *, FILE *);
size_t   fread(void *, size_t, size_t, FILE *);
FILE    *freopen(const char *, const char *, FILE *);
int      fscanf(FILE *, const char *, ...);
int      fseek(FILE *, long int, int);
int      fseeko(FILE *, off_t, int);
int      fsetpos(FILE *, const fpos_t *);
long int ftell(FILE *);
off_t    ftello(FILE *);
int      ftrylockfile(FILE *);
void     funlockfile(FILE *);
size_t   fwrite(const void *, size_t, size_t, FILE *);
int      getc(FILE *);
int      getchar(void);
int      getc_unlocked(FILE *);
int      getchar_unlocked(void);
int      getopt(int, char * const[], const char); (LEGACY)
char    *gets(char *);
int      getw(FILE *);
int      pclose(FILE *);
void     perror(const char *);
FILE    *popen(const char *, const char *);
int      printf(const char *, ...);
int      putc(int, FILE *);
int      putchar(int);
int      putc_unlocked(int, FILE *);
int      putchar_unlocked(int);
int      puts(const char *);
int      putw(int, FILE *);
int      remove(const char *);
int      rename(const char *, const char *);
void     rewind(FILE *);
int      scanf(const char *, ...);
void     setbuf(FILE *, char *);
int      setvbuf(FILE *, char *, int, size_t);
int      snprintf(char *, size_t, const char *, ...);
int      sprintf(char *, const char *, ...);
int      sscanf(const char *, const char *, int ...);
char    *tempnam(const char *, const char *);
FILE    *tmpfile(void);
char    *tmpnam(char *);
int      ungetc(int, FILE *);
int      vfprintf(FILE *, const char *, va_list);
int      vprintf(const char *, va_list);
int      vsnprintf(char *, size_t, const char *, va_list);
int      vsprintf(char *, const char *, va_list);

The following external variables are defined:


extern char  *optarg;    )
extern int    opterr;    )
extern int    optind;    ) (LEGACY)
extern int    optopt;    )

Inclusion of the <stdio.h> header may also make visible all symbols from <stddef.h>. */
#include<stdio.h>
void main()
{
    //Variable declaration
    int number;
    float amount;

    // initialization variable
    number = 100;

    amount = 30.75 + 75.32;

    //Print output on screen
    printf("%d\n",number);
    printf("%5.2f\n",amount);
    return 0;
}
//OutPut
/*
100
106.07

Process returned 7 (0x7)   execution time : 0.047 s
Press any key to continue.*/

