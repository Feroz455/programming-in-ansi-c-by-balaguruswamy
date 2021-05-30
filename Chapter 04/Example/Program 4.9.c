/**
Program 4.9
The program in Fig. 4.9 illustrates the output of integer numbers under
various formats.
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    int m = 12345;
    long n = 987654;
    printf("%d\n",m);
    printf("%10d\n",m);
    printf("%010d\n",m);
    printf("%-10d\n",m);
    printf("%10ld\n",n);
    printf("%10ld\n",-n);
	getch();
	return 0;
}
//main() end

///program end

/**
output
12345
     12345
0000012345
12345
    987654
   -987654

*/
