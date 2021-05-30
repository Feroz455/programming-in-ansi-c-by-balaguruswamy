/**

*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{

    int count[7] = {0,0,0,0,0,0};
    int vote,i;
    printf("Enter -1 to end the program\n");
    printf("Enter you Candidate  Number\n");

    while(1)
    {

    scanf("%d",&vote);
    switch(vote)
    {
    case -1:
        goto end;///to exit while and switch

    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        count[vote]++;
        break;
    default:
        count[6]++;
    }

    }
    end:
        for(i = 1; i < 7; i++)
        {
             if(i == 7-1)
                printf("Spoilt Ballot = %3d\n",count[i]);
            else
            printf("Number %d candidate Get = %3d Vote\n",i,count[i]);

        }
	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter -1 to end the program
Enter you Candidate  Number
1       6       5       3       1       6       4       1       2       2       2       2       1       6       6
        1       5       3       4       2       3       6       5       5       6       5       5       2       1
        1       3       3       6       3       6       2       6       5       3       4       2       5       1
        4       2       1       1       3       6       6       5       4       2       1       1       4       2
        4       1       6       5       6       5       3       6       3       3       3       3       1       5
        6       6       3       1       4       6       1       6       4       3       1       5       6       1
        4       5       4       3       6       3       5       6       1       3       1       3       4       2
        5       1       6       5       1       1       1       2       6       4       5       6       1       3
        2       4       6       3       6       2       5       6       5       1       1       3       1       5
        1       6       6       3       4       3       1       2       2       1       3       4       6       2
        5       5       1       3       3       6       6       1       5       6       4       6       1       1
        6       5       5       2       5       5       5       2       5       3       3       6       1       3
        1       3       3       3       6       6       4       2       3       3       5       6       6       5
        1       4       6       3       1       1       3       4       2       2       3       3       4       6
        4       5       6       5       6       3       3       6       4       2       6       1       5       6
        3       5       4       2       3       3       6       4       4       2       3       2       5       6
        2       5       5       4       3       4       2       2       3       1       6       4       2       5
        2       3       2       3       2       3       5       4       3       6       4       1       1       1
        5       5       6       4       4       3       3       3       3       6       4       6       5       1
        4       6       5       5       2       4       2       3       5       5       4       3       6       2
        3       6       5       6       5       1       3       6       5       5       6       2       4       1
        6       6       2       2       6       5       5       2       6       5       1       5       1       5
        2-1
Number 1 candidate Get =  50 Vote
Number 2 candidate Get =  42 Vote
Number 3 candidate Get =  59 Vote
Number 4 candidate Get =  38 Vote
Number 5 candidate Get =  57 Vote
Spoilt Ballot =  64
*/
