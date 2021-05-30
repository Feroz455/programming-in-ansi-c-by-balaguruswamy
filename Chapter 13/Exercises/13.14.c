/**
page 450
program 13.14
13.14 Write a function that computes and returns the length of a circular list

*/

///program begin
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

/************************************************/
struct _node
{
    int number;
    struct _node *next;
};
typedef struct _node node;
/************************************************/
void create(node *list);
void print(node *list);
int count(node *list);
void CheckCircularList(node *list);
/************************************************/
node *HEAD;

//main() function begin

int main(int argc,char *argv[])
{
    HEAD = (node *) calloc(1, sizeof(node));
    printf("Enter list of number\t-999 to end\n");
    create(HEAD);
    CheckCircularList(HEAD);
    printf("\nNumber of item = %d\n",count(HEAD));
    printf("Content of Linked list\n\n");
    print(HEAD);
    getch();
	return 0;
}
///main() end
void create(node *list)
{
    scanf("%d",&list->number);
    if(list->number == -999)
    {
        list->next = HEAD;
    }
    else
    {
        list->next = (node *) calloc(1, sizeof(node));
        create(list->next);
    }

}
///program end
void CheckCircularList(node *list)
{
    printf("\n\n");
        int i;
        for(i = 0; i < 10; i++, list = list->next)
        {
            printf("%d  ",list->number);
        }
        printf("\n\n");
    return;
}
void print(node *list)
{
    if(list->next != HEAD)
    {
        printf("%d-->",list->number);
        if(list->next->next == HEAD)
        {
            printf("%d\n",list->next->number);
            return;
        }
    }
    print(list->next);
}
int count(node *list)
{
    if(list->next == HEAD)
    {
        return(1);

    }
    return(1+count(list->next));
}

/**
output
Enter list of number    -999 to end
14
5
2
1
4
45
6
5
61
3
564
6
12
13
-999


14  5  2  1  4  45  6  5  61  3


Number of item = 15
Content of Linked list

14-->5-->2-->1-->4-->45-->6-->5-->61-->3-->564-->6-->12-->13-->-999

Process returned 0 (0x0)   execution time : 8.428 s
Press any key to continue.
*/
