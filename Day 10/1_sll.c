#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head,*newnode,*tail;
int main()
{
    head=NULL;
    int ch=1;
    while (ch)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter a number:");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL){
            head=newnode;
            tail=newnode;}
            else{
                tail->next=newnode;
                tail=newnode;
            }
            printf("Do you need to continue or not(0|1):\n");
            scanf("%d",&ch);
    }
    printf("Elements:\n");
    tail=head;
    while(tail!=NULL){
        printf("%d ",tail->data);
        tail=tail->next;
    }
    printf("\n");
    return 0;
}

