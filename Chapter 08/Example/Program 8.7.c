/**
page 250
program 8.7

Write a program which would print the alphabet set a to z and A to Z
in decimal and character from
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    char c;
    printf("\n\n");
///to print new line after 5 ocurrence
    int i = 0;
    for(c = 65; c < 122; c++)
    {
        if(c > 90 && c < 97)
            continue;
        printf("|%5d - %c ",c,c);
        i++;
        if(i%5 == 0)
            printf("\n");

    }
    printf("\n");
	getch();
	return 0;
}
///main() end

///program end

/**
output

|   65 - A |   66 - B |   67 - C |   68 - D |   69 - E
|   70 - F |   71 - G |   72 - H |   73 - I |   74 - J
|   75 - K |   76 - L |   77 - M |   78 - N |   79 - O
|   80 - P |   81 - Q |   82 - R |   83 - S |   84 - T
|   85 - U |   86 - V |   87 - W |   88 - X |   89 - Y
|   90 - Z |   97 - a |   98 - b |   99 - c |  100 - d
|  101 - e |  102 - f |  103 - g |  104 - h |  105 - i
|  106 - j |  107 - k |  108 - l |  109 - m |  110 - n
|  111 - o |  112 - p |  113 - q |  114 - r |  115 - s
|  116 - t |  117 - u |  118 - v |  119 - w |  120 - x
|  121 - y
*/



