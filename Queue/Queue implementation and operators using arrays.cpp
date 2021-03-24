#include <iostream>
using namespace std;

class Queue{
	
	private:
		int rear;
		int front;
		int arr[5];
		
		
	public:
		
		Queue(){
			
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
			
			if(rear==4)
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
				
				rear++;
				arr[rear]=val;
			}
		
		}
		
		int Dequeue(){
			
			int x =0;
			
			if(isEmpty()){
				cout<<"Memory empty"<<endl;
				return x;
			} else if(rear==front){
				
				x=arr[rear];
				rear =front =-1;
				return x;	
			}else{
				
				x=arr[front];
				arr[front]=0;
				front++;
				return x;
			}
			
		}
		
		int count(){
			
			return (rear-front+1);
		}
		
		void display(){
			for(int i=0;i<5;i++){
				cout<<arr[i]<<endl;
			}
		}
		
};

int main(){
	
	Queue q;
	int value , option;
	do{
		cout<<"\n\n What operation do you want to perform ? Select any option below"<<endl;
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
				q.Enqueue(value);
				break;
			case 2:
				cout<<"Element dequeue "<<endl;
				cout<<q.Dequeue();
				break;
			case 3:
				if(q.isEmpty())
					cout<<"Queue is empty"<<endl;
				else
					cout<<"Queue not empty yet!!"<<endl;
				break;
			case 4:
				if(q.isFull())
					cout<<"Queue Full!!"<<endl;
				else
					cout<<"Queue not full yet!!";
				break;
			case 5:
				cout<<"Number of items stored in queue is "<<q.count()<<endl;
				break;
			case 6:
				cout<<"Display function called "<<endl;
				q.display();
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

