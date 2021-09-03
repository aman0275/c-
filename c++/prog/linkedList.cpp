#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	int val;
	Node *next;
};


Node* insertion(Node*head){
	Node*temp = new Node;
	temp->val = 1;
	temp->next = head;
	return temp;

}

int main(){

	Node *head = new Node;
	Node *first = new Node;
	Node *second = new Node;

	head->next = first;
	first->next = second;
	second->next = NULL;

	head->val = 8;
	first->val = 9;
	second->val = 10;

	head = insertion(head);

	Node *temp;
	temp = head;

	while(temp!=NULL){
		cout<<temp->val<<" -> ";
		temp = temp->next;
	}
}