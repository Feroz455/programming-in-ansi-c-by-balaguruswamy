/**
6.10 Write a program to print a table of values of the function
y = exp (-x)
for varying from 0.0 to 10.0 in steps of 10.0.
*/

///program begin
#include<stdio.h>
#include<conio.h>
#include<math.h>

//main() function begin

int main()
{
    int num;
    int i,j,k;
    float y,point;
    printf("___________________________________________________________________________________\n");
    printf("Number\t");
       for(i = 0; i < 10; i++)
    {
        printf("%.1f   \t",(float)i/10);

    }
    printf("\n");
    printf("___________________________________________________________________________________\n");

   for(k = 0; k <= 10; k++)
   {
       printf("|%d|\t",k);
       for(i = 0; i < 10; i++)
    {
        point = (float)i/10;
        y = point + k;
        printf("%.5f\t",exp(-y));

    }
    printf("\n");
   }
	getch();
	return 0;
}
///main() end

///program end

/**
output
___________________________________________________________________________________
Number  0.0     0.1     0.2     0.3     0.4     0.5     0.6     0.7     0.8     0.9
___________________________________________________________________________________
|0|     1.00000 0.90484 0.81873 0.74082 0.67032 0.60653 0.54881 0.49659 0.44933 0.40657
|1|     0.36788 0.33287 0.30119 0.27253 0.24660 0.22313 0.20190 0.18268 0.16530 0.14957
|2|     0.13534 0.12246 0.11080 0.10026 0.09072 0.08208 0.07427 0.06721 0.06081 0.05502
|3|     0.04979 0.04505 0.04076 0.03688 0.03337 0.03020 0.02732 0.02472 0.02237 0.02024
|4|     0.01832 0.01657 0.01500 0.01357 0.01228 0.01111 0.01005 0.00910 0.00823 0.00745
|5|     0.00674 0.00610 0.00552 0.00499 0.00452 0.00409 0.00370 0.00335 0.00303 0.00274
|6|     0.00248 0.00224 0.00203 0.00184 0.00166 0.00150 0.00136 0.00123 0.00111 0.00101
|7|     0.00091 0.00083 0.00075 0.00068 0.00061 0.00055 0.00050 0.00045 0.00041 0.00037
|8|     0.00034 0.00030 0.00027 0.00025 0.00022 0.00020 0.00018 0.00017 0.00015 0.00014
|9|     0.00012 0.00011 0.00010 0.00009 0.00008 0.00007 0.00007 0.00006 0.00006 0.00005
|10|    0.00005 0.00004 0.00004 0.00003 0.00003 0.00003 0.00002 0.00002 0.00002 0.00002
*/

