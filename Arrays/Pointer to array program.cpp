#include <iostream>
#include <string>
using namespace std;

struct Person{
	string name;
	int age;
	int salary;
};

int main(){
	Person p1;
	
	Person *ptr=&p1;
	
	cout<<"Enter the details of user "<<endl;
	cin>>ptr->name;
	cin>>ptr->age;
	cin>>ptr->salary;
	
	
	cout<<"The details of user are : "<<endl;
	
		
	cout<<"Name of employee "<<ptr->name<<endl;
	cout<<"Age "<< ptr->age<<endl;
	cout<<"Salary "<< ptr->salary<<endl;
		
	
	
	return 0;
}
