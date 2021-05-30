/**
page 450
program 13.7
13.7) Write a program to create a circular linked list so that the input order of data
item is maintained . Add function to carry out the following operations on circular linked list.

a) Count the number of nodes.
b) Write out contents.
c) Locate and write the contents of a given node.
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
void search(node *list);
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
    search(HEAD);

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
void search(node *list)
{
    int i, j, check = 0;
    printf("Enter node number\n\n");
    scanf("%d",&j);
        for(i = 0; i < j, list->next != HEAD; i++, list = list->next)
        {
            if(i == (j-1))
            {
                   printf("Number %d node contain = %d value\n\n",j,list->number);
                   check = 1;
                   return ;
            }

        }
        if(check == 0)
        {
            printf("There is no Such Node in list\n");
        }
        return;

}
/**
output
Enter list of number    -999 to end
5
6
2
4
9
6
3
-999


5  6  2  4  9  6  3  -999  5  6


Number of item = 8
Content of Linked list

5-->6-->2-->4-->9-->6-->3-->-999
Enter node number

5
Number 5 node contain = 9 value


Process returned 0 (0x0)   execution time : 21.763 s
Press any key to continue.
*/
