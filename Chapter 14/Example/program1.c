/**
page 453
Simple Macro Substitution
*/

///program begin
#include<stdio.h>
#include<conio.h>
#define COUNT 100
#define FALSE 0
#define SUBJECTS 6
#define PI 3.1415926
#define CAPITAL "DHAKA"
#define M 5
#define AREA 5*12.46
#define SIZE sizeof(int)*4
#define TWO_PI 2.0*PI
#define D (45-22)
#define A (78+32)
#define TEST if(A>D)
#define AND
#define PRINT printf("\nVERY GOOD \n");
//main() function begin

int main(int argc,char *argv[])
{
    printf("COUNT = %d\n",COUNT);
    printf("FALSE = %d\n",FALSE);
    printf("SUBJECTS = %d\n",SUBJECTS);
    printf("PI  = %f\n",PI);
    printf("CAPITAL  = %s\n",CAPITAL);
    printf("M = %d\n",M);
    int total, Value;
    Value = 10;
    total = Value * M;
    printf("Total = %d\n",total);
    printf("AREA = %f\n",AREA);
    printf("SIZE = %d\n",SIZE);
    printf("TWO_PI  = %f\n",TWO_PI);
    float ratio = A / D;
    printf("Ratio  = %f", ratio);
    TEST AND PRINT


	getch();
	return 0;
}
///main() end

///program end

/**
output
COUNT = 100
FALSE = 0
SUBJECTS = 6
PI  = 3.141593
CAPITAL  = DHAKA
M = 5

Process returned 0 (0x0)   execution time : 9.687 s
Press any key to continue.
*/
