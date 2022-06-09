#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
struct node
{
    int item;
    struct node *next;
};
struct node *start,*ptr;

void insertAtFirst()
{
    int data;
    printf("\n enter a value: ");
    scanf("%d",&data);
    ptr=(struct node*)malloc(sizeof(struct node*));
    ptr->item=data;
    ptr->next=start;
    start=ptr;
}

void insertAtLast()
{
    int data;
    struct node *tmp;
    printf("\n enter a value: ");
    scanf("%d",&data);
    ptr=(struct node*)malloc(sizeof(struct node*));
    ptr->item=data;
    ptr->next=NULL;
    if(start==NULL)
    {
        start=ptr;
    }
    else
    {
        tmp=start;
        while(tmp->next!=NULL)
            tmp=tmp->next;
        tmp->next=ptr;
    }
}

void insertAfter()
{
    if(start==NULL)
        printf("\n LIST IS EMPTY");

    else
    {
        struct node *t=start;
        int n,data;
            printf("\n enter element: ");
            scanf("%d",&n);
            printf("\n enter value for inserted: ");
            scanf("%d",&data);
        while(t!=NULL)
        {
            if(t->item==n)
                break;
            t=t->next;
        }
        if(t==NULL)
            printf("\n element not matched");
        else
        {
            struct node *temp;
            temp->item=data;
            temp->next=t->next;
            t->next=temp;
        }
    }

}

void delAtFirst()
{
    struct node *tmp;
    if(start==NULL)
        printf("\n list is empty");
    else
    {
        tmp=start;
        start=tmp->next;
        printf("\n %d is deleted",tmp->item);
        free(tmp);
    }
}

void deleteAtLast()
{
    struct node *tmp1;
    struct node *tmp2;
    if(start==NULL)
        printf("\n list is empty");
    else if(start->next==NULL)
    {
        tmp1=start;
        start=NULL;
        printf("\n %d is deleted",tmp1->item);
        free(tmp1);
    }
    else
    {
        tmp1=start;
        tmp2=start;
        while(tmp1->next!=NULL)
        {
            tmp2=tmp1;
            tmp1=tmp1->next;
        }
        tmp2->next=NULL;
        printf("\n %d is deleted",tmp1->item);
        free(tmp1);
    }
}

void deleteAnyValue()
{
    int data;
    printf("\n enter value for deleted: ");
    scanf("%d",&data);

    if(start==NULL)
        printf("\n LIST IS EMPTY");
    else if(start->item==data)
    {
        struct node *t=start;
        start=start->next;
        free(t);
    }
    else
    {
        struct node *t1,*t2;
        t1=start;
        t2=NULL;
        while(t1!=NULL)
        {
            if(t1->item==data)
                break;
            t2=t1;
            t1=t1->next;
        }
        if(t1!=NULL)
        {
            t2->next=t1->next;
            free(t1);
        }
    }
}

void search()
{
    int data;
    printf("\n enter value for search: ");
    scanf("%d",&data);
    struct node *temp=start;
    while(temp!=NULL)
    {
        if(temp->item==data)
            break;
        temp=temp->next;
    }
    if(temp!=NULL)
        printf("\n DATA IS FOUND");
    else
    printf("\n DATA IS NOT FOUND");
}


void reverse()
{
    if(start==NULL)
        printf("\n LIST IS EMPTY");
    else if(start->next==NULL)
        printf("\n %d",start->item);
    else
    {
        struct node *prev=NULL;
        struct node *curr=start;
        struct node *temp=NULL;
        while(curr!=NULL)
        {
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        start=prev;
    }
    //printing the value
        /*struct node *tmp=start;
        while(tmp!=NULL)
        {
            printf(" %d",tmp->item);
            tmp=tmp->next;
        }*/
display();
}

void display()
{
    if(start==NULL)
        printf("\n LIST IS EMPTY");
    else
    {
        struct node *temp=start;
        while(temp!=NULL)
        {
            printf("  %d",temp->item);
            temp=temp->next;
        }
    }
}

int main()
{
    int n;
    L:
    printf("\n enter 1 for insertAtFirst: ");
    printf("\n enter 2 for insertAtLast: ");
    printf("\n enter 3 for delAtFirst: ");
    printf("\n enter 4 for delAtLast: ");
    printf("\n enter 5 for reverse: ");
    printf("\n enter 6 for display: ");
    printf("\n enter 7 for insert after particular value: ");
    printf("\n enter 8 for delete any value");
    printf("\n enter 9 for search value");
    printf("\n more then 9 for exit: ");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        {
            insertAtFirst();
            goto L;
            break;
        }
    case 2:
        {
            insertAtLast();
            goto L;
            break;
        }
    case 3:
        {
            delAtFirst();
            goto L;
            break;
        }
    case 4:
        {
            deleteAtLast();
            goto L;
            break;
        }
    case 5:
        {
            reverse();
            goto L;
            break;
        }
    case 6:
        {
            display();
            goto L;
            break;
        }
    case 7:
        {
            insertAfter();
            goto L;
            break;
        }
    case 8:
        {
            deleteAnyValue();
            goto L;
            break;
        }
    case 9:
        {
            search();
            goto L;
            break;
        }
    default:
        {
            exit(0);
        }
    }
    getch();
    return 0;
}
