/**
page 450
program 13.12
13.12 Write a function that counts and returns the total number of nodes in a linked list.

*/

///program begin
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//main() function begin
typedef struct _node
{
    int number;
    struct _node *next;
}node;


node *create(node *list);
node * insert(node *list, int n);
node *lastNode(node *list);
void print(node *list);
int count(node *list);


int main(int argc,char *argv[])
{
    node *list, *last;
    list = (node *)calloc(1, sizeof(node));
    list = create(list);
    print(list->next);
    printf("n\nNumber of node into the linked list  = %d\n\n",count(list));
    getch();
	return 0;
}
///main() end
node *create(node *list)
{
    int n;
    printf("Enter a list of number\nTo end type -999 \t");
    scanf("%d",&n);
    while(n != -999)
    {
        if(list == NULL)
        {
            list = (node*) calloc(1, sizeof(node));
            list->number = n;
            list->next = NULL;
        }
        else
        {
            list = insert(list, n);
        }
         printf("Enter a list of number\nTo end type -999 \t");
         scanf("%d",&n);
    }
    return(list);
}
node * insert(node *list, int n)
{
    node *Head, *helper, *new;

    helper = NULL;
    Head = list;

    while(Head->number < n)
    {
        helper = Head;
        if(Head ->next == NULL)
        {
            Head = Head->next;
            break;
        }
        Head = Head->next;
    }

    new = (node *) calloc(1, sizeof(node));
    new->number = n;
    new->next = Head;
    if(helper ==  NULL)
    {
        list = new;
    }
    else
    {
        helper->next = new;
    }
    return(list);

}
node *lastNode(node *list)
{
    if(list ==  NULL)
    {
        return(NULL);
    }
    while(list != NULL)
    {
        if(list->next == NULL)
        {
            return(list);
        } list = list->next;

    }
}
void print(node *list)
{
    if(list->next != NULL)
    {
        printf("%d-->",list->number);
        if(list->next->next == NULL)
        {

        printf("%d",list->next->number);
        return;
        }
    }
    print(list->next);
}
int count(node *list)
{

    if(list->next == NULL)
    {
        return(0);
    }
    return(1+count(list->next));
}

/**
output
Enter a list of number
To end type -999        1
Enter a list of number
To end type -999        4
Enter a list of number
To end type -999        5
Enter a list of number
To end type -999        2
Enter a list of number
To end type -999        3
Enter a list of number
To end type -999        6
Enter a list of number
To end type -999        5
Enter a list of number
To end type -999        4
Enter a list of number
To end type -999

5
Enter a list of number
To end type -999        5-999
Enter a list of number
To end type -999

0-->1-->2-->3-->4-->4-->5-->5-->5-->5-->6
Number of node into the linked list  = 10


Process returned 0 (0x0)   execution time : 8.608 s
Press any key to continue.
*/
