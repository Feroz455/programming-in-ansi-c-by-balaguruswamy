/**
page 450
program 13.6
13.6) Develop a program to combine two sorted list to produce a third sorted lists which contains one
occurrence of each of the elements in the original list
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
        list = insert_sort_E(list, list1->number);
        list1=list1->next;
    }
    while(list2 != NULL)
    {
        list = insert_sort_E(list, list2->number);
        list2=list2->next;
    }

    return(list);

}
node *insert_sort_E(node *list, int n)
{
    node *new, *mn, *helper,*temp;
    helper = NULL;
    mn = list;
    temp = list;
    while(temp != NULL)
    {
        if(temp->number == n)
        {
            return(list);
        }
        temp = temp->next;
    }
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

1 54 80 70 4 12 70 74 73 63
53 9 33 20 37 61 89 90 41 28
83 47 35 9 78 24 10 64 37 37
-999
Enter list of number
To end type -999

55 6 46 1 14 16 75 62 86 2
44 75 27 51 82 63 88 39 75 10
8 93 91 41 52 7 91 50 77
-999
First List
1-->4-->9-->9-->10-->12-->20-->24-->28-->33-->35-->37-->37-->37-->41-->47-->
53-->54-->61-->63-->64-->70-->70-->73-->74-->78-->80-->83-->89-->90
Second list
1-->2-->6-->7-->8-->10-->14-->16-->27-->39-->41-->44-->46-->50-->51-->52-->55-->
62-->63-->75-->75-->75-->77-->82-->86-->88-->91-->91-->93
Final list
1-->2-->4-->6-->7-->8-->9-->10-->12-->14-->16-->20-->24-->27-->28-->33-->35-->
37-->39-->41-->44-->46-->47-->50-->51-->52-->53-->54-->55-->61-->62-->63-->64-->
70-->73-->74-->75-->77-->78-->80-->82-->83-->86-->88-->89-->90-->91-->93

*/
