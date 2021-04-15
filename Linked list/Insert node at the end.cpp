#include <iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
};

class Linkedlist{
	public:
		Node* head;
	public:
		Linkedlist(){
			head=NULL;
		}
		void insert_at_last(int newElement){
			Node* newnode = new Node();
			newnode->data=newElement;
			newnode->next=NULL;
			//Check if linked list is empty then make the new node as head then
			if(head==NULL){
				head=newnode;
			}else{
				Node* temp = head;                  //traverse to the last node
				while(temp->next!=NULL){
					temp=temp->next;
				}
				//change the next of last node to new node
				temp->next=newnode;
			}
	
		}
		void printlist(){
			Node* temp=head;
			if(temp!=NULL){
				cout<<"The list contains :"<<endl;
				while(temp!=NULL){
					cout<<temp->data<<" ";
					temp=temp->next;
				}
			}else{
				cout<<"The list is empty";
			}
		}
};

int main(){
	
	
	Linkedlist mylist;
	
    Node* first = new Node();
	first->data = 10;
	first->next = NULL;
	mylist.head=first;
	
	Node* second = new Node();
	second->data=20;
	second->next=NULL;
	first->next=second;
	
	Node* third = new Node();
	third->data=30;
	third->next=NULL;
	second->next=third;
	
	mylist.insert_at_last(50);
	mylist.printlist();
	return 0;
}

