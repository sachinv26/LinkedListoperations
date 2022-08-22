#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
    /* data */
};

void printlist(Node *head){
    if(head==NULL)return;
    Node *p=head;
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=head);
    cout<<endl;
}

//O(1) approach

Node *insertBegin(Node * head,int x){
    Node *temp=new Node(x);
    if(head==NULL){
        temp->next=temp;
        return temp;    
    }
    else{
        temp->next=head->next;
        head->next=temp;
        int t=head->data;
        head->data=temp->data;
        temp->data=t;
        return head;
    }
}



















//O(n) approach
// Node *insertbegin(Node *head,int data)
// {
//     Node *temp=new Node(data);
//     if(head==NULL)
//         return temp->next=temp;
//     else
//     {
//         Node *curr=head;
//         while(curr->next!=head)
//         {
//             curr=curr->next;
//          }
//     curr->next=temp;
//     temp->next=head;
//     }
//     return head;
// }
int main()
{
    Node *head=new Node(30);
    Node *temp1=new Node(40);
    Node *temp2=new Node(50);
    head->next=temp1;
    temp1->next=temp2;
    temp2->next=head;
    printlist(head);
    head=insertbegin(head,60);
    printlist(head);
    return 0;
}