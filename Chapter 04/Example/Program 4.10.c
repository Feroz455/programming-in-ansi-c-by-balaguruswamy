/**

*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    float y = 98.7654;
    printf("%7.4f\n", y);
    printf("%f\n", y);
    printf("%7.2f\n", y);
    printf("%-7.2f\n", y);
    printf("%07.2f\n", y);
    printf("%*.*f", 7, 2, y);
    printf("\n");
    printf("%10.2e\n", y);
    printf("%12.4e\n", -y);
    printf("%-10.2e\n", y);
    printf("%e\n", y);

	getch();
	return 0;
}
///main() end

///program end

/**
output
98.7654
98.765404
  98.77
98.77
0098.77
  98.77
 9.88e+001
-9.8765e+001
9.88e+001
9.876540e+001
*/
