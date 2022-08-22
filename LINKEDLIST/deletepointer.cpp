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

void deleteNode(Node *ptr)
{
    Node *temp=ptr->next;
    ptr->data=ptr->next->data;
    ptr->next=ptr->next->next;
    delete(temp);
}

void printlist(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;
}


int main() 
{ 
	Node *head=new Node(10);
	head->next=new Node(20);
	Node *ptr=new Node(30);
	head->next->next=ptr;
	head->next->next->next=new Node(40);
	head->next->next->next->next=new Node(25);
	printlist(head);
	deleteNode(ptr);
	printlist(head);
	return 0;
} 
