#include <iostream>
#include <string>

using namespace std;

class stack{
	private:
		
		int arr[5];
		int top;
	
	public:
		
		stack(){
			top=-1;
			for(int i=0;i<5;i++){
				arr[i]=0;
			}
		}
		bool isEmpty(){
			
			if(top==-1)
				return true;
			else
				return false;
			
		}
		bool isFull(){
			
			if(top==4)
				return true;
			else 
				return false;
			
		}
		void push(int val){
			
			if(isFull())
				cout<<"StackOverFlow"<<endl;
			
			else
				top++;
				arr[top]=val;
			
		}
		int pop(){
			if(isEmpty())
				cout<<"StackUnderFlow"<<endl;
			
			else{
				int popvalue = arr[top];
				arr[top]==0;
				top--;
				return popvalue;
			}
		}
		int count(){
			
			return (top+1);
		}
		int peek(int pos){
			
			if(isEmpty())
				cout<<"StackUnderFlow"<<endl;
			else
				return arr[pos];
			
		}
		int change(int pos , int val){
			
			arr[pos]=val;
			cout<<"Value changed to position"<<pos<<endl;
		}
		void display(){
			cout<<"Values inside the stack are displayed here:"<<endl;
			for(int i=0;i<5;i++){
				cout<<arr[i]<<endl;
			}
		}

};

int main(){
	stack s;
	int option , position , value;
	do{
		cout<<"What operation do you want to perform ? The array is declared dynamically of size 5 , Enter the option number for the expected operation to be performed."<<endl;
		cout<<"Enter 0 to exit"<<endl;
		cout<<"1.Push"<<endl;
		cout<<"2.Pop"<<endl;
		cout<<"3.isEmpty"<<endl;
		cout<<"4.isFull"<<endl;
		cout<<"5.Peek"<<endl;
		cout<<"6.Count"<<endl;
		cout<<"7.Change"<<endl;
		cout<<"8.Display"<<endl;
		cout<<"9.Clear Screen"<<endl<<endl<<endl;
		
	
	
	cin>>option;
	
	switch(option){
		case 0:
			break;
		case 1:
			cout<<"Enter element to be pushed inside the stack"<<endl;
			cin>>value;
			s.push(value);
			cout<<"Element "<< value <<" successfully pushed inside stack"<<endl<<endl;
			break;
		case 2:
		    cout<<"Pop function called out"<<s.pop()<<endl<<endl;
			break;
		case 3:
		    if(s.isEmpty())
		    	cout<<"Stack is empty"<<endl<<endl;
			
			else 
				cout<<"Stack is not empty"<<endl<<endl;
				
			break;
			
		case 4:
			if(s.isFull())
				cout<<"Stack is full"<<endl<<endl;
			
			else
				cout<<"Stack is not full";
			break;
		case 5:
			cout<<"Enter position of item you want to access(peek)"<<endl;
			cin>>position;
			cout<<s.peek(position)<<endl;
			break;
		case 6:
			cout<<"Count function called"<<endl<<endl;
			cout<<s.count();
			break;
		case 7:
			cout<<"Enter the position you want to change"<<endl;
			cin>>position;
			cout<<"Enter the value you want to change"<<endl;
			cin>>value;
			s.change(position,value);
			break;
		case 8:
			cout<<"Display function called"<<endl;
			s.display();
			break;
		case 9:
			system("cls");
			break;
		default:
			cout<<"Enter right option"<<endl;
			
		
		
	}
	
	}while(option!=0);
	return 0;
}
