#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node* insert(struct node* head,int data)
{
    struct node *temp,*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    if(head=NULL)
    return head;
    newnode->next=head;
    head=newnode;
    return head;
}
void knode(struct node *head,int k)
{
    int n=0;
    int i;
    struct node *temp=head;
    struct node *temp2=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        n++;
    }
    for(i=0;i<n-k;i++)
        {
          temp2=temp2->next;    
        }
        printf("%d",temp2->data);
}
int main()
{
    struct node *head,*newnode,*temp2;
    head=(struct node*)malloc(sizeof(struct node));
    int data;
    int k;
    int s,i;
    printf("enter s");
    scanf("%d",&s);
    for(i=0;i<s;i++)
    {
    printf("enter data");
    scanf("%d",&data);
    head=insert(head,data);
    }
    scanf("%d",&k);
    knode(head,k);
    
}