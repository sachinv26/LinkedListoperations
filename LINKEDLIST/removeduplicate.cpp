#include <bits/stdc++.h>
using namespace std;

// Linked list Node
struct Node {
	int data;
	Node* next;
	Node(int d)
	{
		data = d;
		next = NULL;
	}
};

Node *push(Node *head,int data)
{
    Node *new_node=new Node(data);
    new_node->next=head;
    head=new_node;
    return head;
}


Node *removeduplicate(Node *head)
{
      Node *curr=head;
      while(curr!=NULL && curr->next!=NULL)
      {
        if(curr->data==curr->next->data)
        {
            Node *temp=curr->next;
            curr->next=curr->next->next;
            delete(temp);
        }
        else{
            curr=curr->next;
        }
      }
      return head;
}




void printList(Node* head)
{
	Node* temp = head;
	while (temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}


int main()
{
    Node *llist=NULL;
    llist=push(llist,20);
    llist = push(llist, 20);
	llist = push(llist, 13);
	llist = push(llist, 13);
	llist = push(llist, 11);
	llist = push(llist, 11);
	llist = push(llist, 11);
	cout << ("List before removal of duplicates\n");
	printList(llist);
	cout << ("List after removal of elements\n");
    llist=removeduplicate(llist);
    printList(llist);
    return 0;
}