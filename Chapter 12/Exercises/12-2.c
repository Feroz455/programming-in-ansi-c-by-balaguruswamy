/**
page 418
program 12.2 Two file DATA1 and DATA2 contain sorted lists of integer.
Write a program to produce a third file DATA which holds a single sorted, merged list
of these two lists.Use command line argument to specify the file names.
12.
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main(int argc,char *argv[])
{
    int i,v,len,temp,j,array[100];
    FILE *fp1, *fp2, *fp3;
    ///DATA1 open in write mode;
    fp1 = fopen(argv[1], "w");
    printf("Enter Number in sorted way into First file\n");
    for(i = 0 ; i < 10; i++)
    {
        scanf("%d",&v);
        putw(v,fp1);
    }
    fclose(fp1);
///DATA2 open in write mode
     fp2 = fopen(argv[2], "w");
    printf("Enter Number in sorted way into Second file\n");
    for(i = 0 ; i < 10; i++)
    {
        scanf("%d",&v);
        putw(v,fp2);
    }
    fclose(fp1);
///Copying DATA1 and DATA2 into Array
    fp1 = fopen(argv[1], "r");
    fp2 = fopen(argv[2], "r");
    i = 0;
    while((v = getw(fp1)) != EOF)
    {
        array[i++] = v;
    }
    while((v = getw(fp2)) != EOF)
    {
        array[i++] = v;
    }

    fclose(fp1);
    fclose(fp2);

   len = i;

///SORTING DATA3
    for( i  = 0; i < len; i++)
    {
        for(j = 1; j < len; j++)
        {
            if(array[j-1] > array[j])
            {
                temp = array[j-1];
                array[j-1] = array[j];
                array[j] = temp;
            }
        }
    }
    ///Copying array into DATA3
    fp3 = fopen(argv[3], "w");
    for(i = 0; i < len; i++)
    {
        putw(array[i],fp3);
    }
    fclose(fp3);
    ///Printing DATA3 Into screen
    fp3 = fopen(argv[3], "r");
    printf("printed sorted and merged Number\n\n");
     for(i = 0 ; i < len; i++)
    {
       v = getw(fp3);
       printf("%d\t",v);
    }

    fclose(fp3);
	getch();
	return 0;
}
///main() end

///program end

/**
output
Microsoft Windows [Version 10.0.19041.928]
(c) Microsoft Corporation. All rights reserved.

C:\Users\SUPERSONIC>cd C:\Users\SUPERSONIC\Desktop\Cprogramming\cProgramming\Chapter 12\Programming Exercises

C:\Users\SUPERSONIC\Desktop\Cprogramming\cProgramming\Chapter 12\Programming Exercises>12-2 DATA1 DATA2 DATA3
Enter Number in sorted way into First file
1
2
3
4
5
6
7
8
9
10
Enter Number in sorted way into Second file
11
12
13
14
15
16
17
18
19
20
printed sorted and merged Number

1       2       3       4       5       6       7       8       9       10      11      12      13      14      15
        16      17      18      19      20


*/
