#include <iostream>
using namespace std;

class queue{
	
	private:
		int rear;
		int front;
		int arr[4];
		
	public:
		
		queue(){
			front ==-1;
			rear==1;
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
				rear = front =-1;
				return x;	
			}else{
				
				x=arr[front];
				arr[front]=0;
				front++;
				return x;
			}
		}
		
		int count(){
			
			return (rear-front + 1);
		}
		
		void display(){
			for(int i=0;i<5;i++){
				cout<<arr[i]<<endl;
			}
		}
		
};


int main(){
	
	queue q;
	int value , option;
	do{
		
		cout << "\n\nWhat operation do you want to perform? Select Option number."<<endl;
	    cout<<"  0. Exit program." << endl;
        cout << "1. Enqueue()" << endl;
        cout << "2. Dequeue()" << endl;
        cout << "3. isEmpty()" << endl;
        cout << "4. isFull()" << endl;
        cout << "5. count()" << endl;
        cout << "6. display()" << endl;
        cout << "7. Clear Screen" << endl << endl;
 
        cin >> option;
 
        switch (option) {
        	
        	case 0:
        		break;
        	case 1:
        		cout << "Enqueue Operation \nEnter an item to Enqueue in the Queue" << endl;
                cin >> value;
        	    q.Enqueue(value);
                break;
            case 2:
            	 cout << "Dequeue Operation \nDequeued Value : " << q.Dequeue() << endl;
                 break;
            case 3:
            	if(q.isEmpty())
            		cout<<"Queue is Empty"<<endl;
				else
					cout<<"Queue is not empty"<<endl;
				
                break;
            case 4:
            	if(q.isFull())
            		cout<<"Queue is Full"<<endl;
				else
					cout<<"Queue is not full"<<endl;
				break;
  
            case 5:
            	cout << "Count Operation \nNumber of items in Queue : " << q.count() << endl;
            	break;
            	
            case 6:
            	cout << "Display Function Called - " << endl;
                q.display();
                break;
            case 7:
            	system("cls");
            	break;
            default:
            	cout<<"Enter appropriate option number"<<endl;
        }
		
    
	}while(option!=0);
	return 0;
	
    	
	
}
