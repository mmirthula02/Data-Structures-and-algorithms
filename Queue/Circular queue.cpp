#include <iostream>
using namespace std;

class Circularqueue{
	
	private:
		int rear;
		int front;
		int arr[5];
		int countitems;
		
	public:
		
		Circularqueue(){
			countitems=0;
			front ==-1;
			rear==-1;
			for(int i=0;i<5;i++){
				arr[i]=0;
			}
		}
		
		bool isEmpty(){
		
			if(front==-1&&rear==-1)
				return true;
			else
				return false;	
		}
		
		bool isFull(){
			
			if((rear+1)%5==front)
				return true;
			else
				return false;
			
		}
		
		void Enqueue(int val){
			
			if(isFull()){
				
				cout<<"Memory full !! Cannot enqueue element"<<endl;
				
			}else if(isEmpty()){
				
				front = rear = 0;
				arr[rear]=val;
					
			}else {
				
				rear=(rear+1)%5;
				arr[rear]=val;
			}
			countitems++;
		}
		
		int Dequeue(){
			
			int x =0;
			
			if(isEmpty()){
				cout<<"Memory empty"<<endl;
				return x;
			} else if(rear==front){
				
				x=arr[rear];
				rear = front =-1;
				return x;	
			}else{
				
				x=arr[front];
				arr[front]=0;
				front=(front+1)%5;
				return x;
			}
			countitems--;
		}
		
		int count(){
			
			return countitems;
		}
		
		void display(){
			for(int i=0;i<5;i++){
				cout<<arr[i]<<endl;
			}
		}
		
};

int main(){
	
	Circularqueue cq;
	int value , option;
	do{
		cout<<"\n\n What operation do you want to perform ? Select any option below";
		cout<<"Press 0 for exit"<<endl;
		cout<<"1.Enqueue"<<endl;
		cout<<"2.dequeue"<<endl;
		cout<<"3.isEmpty"<<endl;
		cout<<"4.isFull"<<endl;
		cout<<"5.count"<<endl;
		cout<<"6.Display"<<endl;
		cout<<"7.Clear screen"<<endl;
		
		cin>>option;
		
		switch(option){
			case 0:
				break;
			case 1:
				cout<<"Enter element to enqueue"<<endl;
				cin>>value;
				cq.Enqueue(value);
				break;
			case 2:
				cout<<"Element dequeue "<<endl;
				cout<<cq.Dequeue();
				break;
			case 3:
				if(cq.isEmpty())
					cout<<"Queue is empty"<<endl;
				else
					cout<<"Queue not empty yet!!"<<endl;
				break;
			case 4:
				if(cq.isFull())
					cout<<"Queue Full!!"<<endl;
				else
					cout<<"Queue not full yet!!";
				break;
			case 5:
				cout<<"Number of items stored in queue is "<<cq.count()<<endl;
				break;
			case 6:
				cout<<"Display function called "<<endl;
				cq.display();
				break;
			case 7:
				system("cls");
				break;
			default:
				cout<<"Enter appropriate option value"<<endl;
				
				
		}
	}while(option!=0);
	
	return 0;
}

