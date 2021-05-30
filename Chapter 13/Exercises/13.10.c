/**
page 450
program 13.10
13.10 Given two ordered singly linked lists, Write a function that will merge then into a third
ordered list

*/


///program begin
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//main() function begin
/******************************************/
typedef struct _node
{
    int number;
    struct _node *next;
}node;
/******************************************/
node * create();
node *insert_sort(node *head, int n);
void print(node *list);
node *combine(node *list1, node *list2);
node *insert_sort_E(node *list, int n);
/******************************************/
int main(int argc,char *argv[])
{

    node *list1, *list2, *list3;
    list1 = create();
    list2 = create();
    printf("First List\n");
    print(list1);
    printf("\n");
    printf("Second list\n");
    print(list2);

    list3 = combine(list1, list2);
    printf("\n");
    printf("Final list\n");
    print(list3->next);
    getch();
	return 0;
}
///main() end
node* create()
{
    node *list = NULL;
    int n;
    printf("Enter list of number\nTo end type -999\n\n");
    scanf("%d",&n);
    while(n != -999)
    {
        if(list == NULL)
        {
            list = (node *) calloc(1, sizeof(node));
            list->number = n;
            list->next = NULL;
        }
        else
        {
            list = insert_sort(list, n);

        }
        scanf("%d",&n);
    }
return(list);
}

node *insert_sort(node *list, int n)
{
    node *new, *mn, *helper;
    helper = NULL;
    mn = list;
    for(; mn->number < n;mn = mn->next)
    {

        helper = mn;
        if(mn->next == NULL)
        {
            mn = mn->next;
            break;
        }
    }

    new = (node*) calloc(1, sizeof(node));
    new->number = n;
    new->next =mn;
    if(helper == NULL)
    {
        list = new;
    }
    else
    helper->next = new;
    return(list);
}
node *combine(node *list1,node *list2)
{
    node *list ;
    list = (node *)calloc(1, sizeof(node));

    while(list1 != NULL)
    {
        list = insert_sort(list, list1->number);
        list1=list1->next;
    }
    while(list2 != NULL)
    {
        list = insert_sort(list, list2->number);
        list2=list2->next;
    }

    return(list);

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
Enter list of number
To end type -999

1
4
5
2
3
6
5
4
1
2
5
6
3
-999
Enter list of number
To end type -999


1
4
5
2
32
6
56
4
21
21
894
51
2
6

023
2
2
2
-999
First List
1-->1-->2-->2-->3-->3-->4-->4-->5-->5-->5-->6-->6
Second list
1-->2-->2-->2-->2-->2-->4-->4-->5-->6-->6-->21-->21-->23-->32-->51-->56-->894
Final list
1-->1-->1-->2-->2-->2-->2-->2-->2-->2-->3-->3-->4-->4-->4-->4-->5-->5-->5-->5-->6-->6-->6-->6-->21-->21-->23-->32-->51-->56-->894
*/
