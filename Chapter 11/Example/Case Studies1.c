/**
page 385
program Processing of Examination marks
Marks obtained by a batch of student in the annual examination are tabulated as follows


Student name        Marks obtained
S.Laxmi             45 67 38 55
V.S Ra              77 89 56 69
                    ----------

*/

///program begin
#include<stdio.h>
#include<conio.h>
#include<string.h>

#define STUDENT 5
#define SUBJECT 4


//main() function begin
void get_list(char *string[],int array[][SUBJECT+1], int m, int n);
void get_sum(int array[][SUBJECT+1], int m, int n);
void get_rank_list(char *string[], int array [][SUBJECT+1], int m,int  n);
void print_list(char *string[], int array[][SUBJECT+1], int m, int n);
void swap_string(char s1[], char s2[]);
void swap_int(int *p, int *q);
int main()
{
    char name[STUDENT][20];
    int marks[STUDENT][SUBJECT+1];

    printf("Input students name & their marks in four subjects\n");


    get_list(name, marks, STUDENT, SUBJECT);



    get_sum(marks, STUDENT, SUBJECT+1);
    printf("\n");
    print_list(name, marks, STUDENT, SUBJECT+1);
    get_rank_list(name, marks, STUDENT, SUBJECT+1);
    printf("\nRanked List\n\n");
    print_list(name, marks, STUDENT, SUBJECT+1);

	getch();
	return 0;
}
///main() end
void get_list(char *string[],int array[][SUBJECT+1], int m, int n)
{
    int marks[STUDENT][SUBJECT+1];
    int i , j, (*rowptr)[SUBJECT+1] = array;
    for(i = 0; i < m; i++)
    {
        scanf("%s",string+i);
        for(j = 0; j < SUBJECT; j++)
        {
            scanf("%d",(*(rowptr+i)+j));
        }
    }

}
/*Compute total marks obtained by each student*/
void get_sum(int array[][SUBJECT+1], int m, int n)
{
    int i, j, (*rowptr)[SUBJECT+1] = array;
    for(i = 0; i < m; i++)
    {
        (*(rowptr + i))[n-1] = 0;
        for(j = 0; j < n-1; j++)
        {

            *(*(rowptr + i)+(n-1))+= (*(rowptr + i))[j];
         // printf("%d = %d \n",*(*(rowptr + i)+(n-1)) ,(*(rowptr + i))[j]);
        }
       // printf("sum of %d\n",*(*(rowptr + i)+(n-1)));
    }
}

/*Prepare rank list based on total marks*/
//get_rank_list(name, marks, STUDENT, SUBJECT+1);
void get_rank_list(char *string[], int array [][SUBJECT+1], int m,int  n)
{

    int i, j, k, (*rowptr)[SUBJECT+1] = array;
    char *temp;
    for(i = 1; i < m-1; i++ )
    {
        for(j = 1; j < m-1; j++)
        {
            if((*(rowptr + j -1))[n-1] < (*(rowptr + j))[n-1])
            {
              //  printf("%s, %s",(string+(j-1)),string+j);
                swap_string(string+j-1,string+j);
                ///swap_string(string[j-1], string[j] ///this line isn't working in my pc
                               //yes we are working with pointer not array only

                for(k = 0; k < n; k++)
                {
                    swap_int(&(*(rowptr + j -1))[k],&(*(rowptr+j))[k]);
                }
            }
        }
    }
}

/* Print out the ranked list */
void print_list(char *string[], int array[][SUBJECT+1], int m, int n)
{
    int i, j , (*rowptr)[SUBJECT+1] = array;

    for(i = 0; i < m ; i++)
    {
        printf("%-20s",string+i);//working with pointer not array only .
        for(j = 0; j < n; j++)
        {
            printf("%5d",*(*(rowptr + i)+j));
        }
        printf("\n");
    }
}

/* Exchange of integer values*/

void swap_int(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

/* Exchange of string */

void swap_string(char s1[], char s2[])
{

    char swaparea[256];
    int i;
    for(i = 0; i  < 256; i++)
    {
        swaparea[i] = '\0';

    }
     i = 0;
        while(s1[i] != '\0' && i < 256)
        {
            swaparea[i] = s1[i];
            i++;
        }
         i = 0;
         while(s2[i] !=  '\0' && i < 256)
         {
             s1[i] = s2[i];
             s1[++i] = '\0';
         }
         i = 0; while(swaparea[i] != '\0')
         {
             s2[i] = swaparea[i];
             s2[++i] = '\0';
         }
}
///program end

/**
output
Input students name & their marks in four subjects
S.Laxmi 45 67 38 55
V.S.Rao 77 89 56 69
A.Gupta 66 78 98 45
S.Mani 86 72 0 25
R.Daniel 44 55 66 77

S.Laxmi                45   67   38   55  205
V.S.Rao                77   89   56   69  291
A.Gupta                66   78   98   45  287
S.Mani                 86   72    0   25  183
R.Daniel               44   55   66   77  242

Ranked List

V.S.Rao                77   89   56   69  291
A.Gupta                66   78   98   45  287
S.Laxmi                45   67   38   55  205
S.Mani                 86   72    0   25  183
R.Daniel               44   55   66   77  242

Process returned 0 (0x0)   execution time : 9.047 s
Press any key to continue.
*/
