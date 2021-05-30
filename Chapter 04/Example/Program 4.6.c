/**
Program 4.6 Reading of strings using %wc and %ws is illustrated in Fig. 4.6.
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{

    int no;
    char name1[15], name2[15], name3[15];
    printf("Enter serial number and name one\n");
    scanf("%d %15c",&no,name1);
    printf("%d %15s\n\n",no,name1);

    printf("Enter serial number and name two\n");
    scanf("%d %s",&no,name2);
    printf("%d %15s\n\n",no,name2);

    printf("Enter serial number and name three\n");
    scanf("%d %15s",&no,name3);
    printf("%d %15s\n\n",no,name3);
	getch();
	return 0;
}
//main() end

///program end

/**
output
Enter serial number and name one
45 popoiuytpop
45 popoiuytpop-

Enter serial number and name two
67
lkhgasdfghjkl
67   lkhgasdfghjkl

Enter serial number and name three
45
gfdsasdfghjk
45    gfdsasdfghjk


Process returned 0 (0x0)   execution time : 33.359 s
Press any key to continue.
*/
