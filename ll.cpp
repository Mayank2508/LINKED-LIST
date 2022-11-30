#include <iostream>
using namespace std;
struct node{
    int val;
    node *next;
};
struct node *insertion(node *head,int data){
    struct node *temp=new node({data});
    if(head==NULL){
        return head;
    }
    temp->next=head;
    head=temp;
    return head;
} 
int count(struct node *head){
    struct node *temp=head;
    int c=0;
    while(temp!=NULL){
        temp=temp->next;
        c++;
    }
    return c;
}
struct node *delmid(struct node *head,int count){
    struct node *temp=head;
    int mid=count/2;
    for(int i=0;i<mid-2;i++){
        temp=temp->next;
    }
    temp->next=temp->next->next;
    return head;
}
void print(struct node *head){
    while(head!=NULL){
        cout<<head->val;
        head=head->next;
    }
}
int main(){
    int n;
    struct node *hello=new node();
    cin>>n;
    while(n--){
        int data;
        cin>>data;
        hello=insertion(hello,data);
    }
    int c=count(hello);
    hello=delmid(hello,c);
    print(hello);



}