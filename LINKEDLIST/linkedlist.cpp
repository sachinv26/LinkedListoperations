#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int x)
    {
        data=x;
        next=nullptr;
    }
};

void printlist(node *head)
{
    node *curr=head;
    while(curr!=nullptr)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

int main()
{
    node *head= new node(10);
    node *temp1= new node(20);
    node *temp2 = new node(30);
    head->next=temp1;
    temp1->next=temp2;
    printlist(head);
    return 0;
}