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
		void insert_at_front(int newElement){
			Node* newnode = new Node();
			newnode->data=newElement;
			//make head as new node
			newnode->next=head;
			head=newnode;
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
	
	mylist.insert_at_front(40);
	mylist.printlist();
	return 0;
}
