/**
page 450
program 13.11
13.11) Write a function that takes a pointer to first node in a linked list as parameter and returns a
pointer to the last node. NULL should be returned if the list is empty.

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


int main(int argc,char *argv[])
{
    node *list, *last;
    list = (node *) calloc(1, sizeof(node));
    list = create(list);
    print(list);
    last =  lastNode(list);
    printf("\n\nlast node contain ->>>>>>>>>>>>> %d",last->number);



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
///program end

/**
output
Enter a list of number
To end type -999        1
Enter a list of number
To end type -999        4
Enter a list of number
To end type -999        5
Enter a list of number
To end type -999        7
Enter a list of number
To end type -999        8
Enter a list of number
To end type -999        9
Enter a list of number
To end type -999        9
Enter a list of number
To end type -999        2
Enter a list of number
To end type -999

6
Enter a list of number
To end type -999        5
Enter a list of number
To end type -999        621
Enter a list of number
To end type -999
62
Enter a list of number
To end type -999        123
Enter a list of number
To end type -999        2
Enter a list of number
To end type -999        326
Enter a list of number
To end type -999
2
Enter a list of number
To end type -999        032
Enter a list of number
To end type -999        03
Enter a list of number
To end type -999        -999
0-->1-->2-->2-->2-->3-->4-->5-->5-->6-->7-->8-->9-->9-->32-->62-->123-->326-->621

last node contain ->>>>>>>>>>>>> 621
Process returned 0 (0x0)   execution time : 12.100 s
Press any key to continue.
*/
