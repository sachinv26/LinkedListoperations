#include <bits/stdc++.h> 
using namespace std; 

struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

void printlist(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;
}

void printMiddle(Node * head){
    if(head==NULL)return;
    Node *slow=head,*fast=head->next;
    while(fast!=NULL&&fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<slow->data;
}

int main() 
{ 
	Node *head=new Node(219);
	head->next=new Node(690);
	head->next->next=new Node(315);
	head->next->next->next=new Node(427);
	head->next->next->next->next=new Node(285);
    head->next->next->next->next->next=new Node(163);
	printlist(head);
	cout<<"Middle of Linked List: ";
	printMiddle(head);
	return 0;
} 
