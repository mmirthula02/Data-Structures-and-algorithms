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
		void printList(){
			Node* temp = head;
			if(temp!=NULL){
				cout<<"The list is given below"<<endl;
				while(temp!=0){
					cout<<temp->data<<" ";
					temp=temp->next;
				}
			}else{
				cout<<"List is empty";
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
	
	mylist.printList();
	return 0;
}
