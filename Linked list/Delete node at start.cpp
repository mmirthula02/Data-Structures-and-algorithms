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
		void insert_at_end(int newElement){
			Node* newnode = new Node;
			newnode->data=newElement;
			newnode->next=NULL;
			
			if(head==NULL){
				head=newnode;
			}else{
				Node* temp=head;
				while(temp->next!=NULL){
					temp=temp->next;
				}
				temp->next=newnode;
			}
		}
		
		void pop_at_start(){
			if(head!=NULL){
				Node* temp=head;
				head=head->next;
				delete temp;
			}
		}
		
		void printlist(){
			Node* temp=head;
			if(temp!=NULL){
				cout<<"\nThe list is given below "<<endl;
				while(temp!=0){
					cout<<temp->data<<" ";
					temp=temp->next;
				}
				
			}else{
				cout<<"\nList is empty";
			}
		}
};

int main(){
	
	
	
	Linkedlist mylist;
	mylist.insert_at_end(10);
	mylist.insert_at_end(20);
	mylist.insert_at_end(30);
	mylist.insert_at_end(40);
	mylist.insert_at_end(50);
		mylist.printlist();
	mylist.pop_at_start();
	mylist.printlist();
	
	return 0;
	
}
