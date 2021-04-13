//Program 1 : To create an array of structures and accept input and display output

#include <iostream>
#include <string>
using namespace std;

struct Person{
	
	string name;
	int age;
	int salary;

};

int main(){
	
	int size;
	Person p[100];
	
	cout<<"Enter the count of employess in your company"<<" ";
	cin>>size;
	
	cout<<"Enter the personal details of your employee"<<endl;
	for(int i=0;i<size;i++){
		cout<<"Enter details of employee "<<(i+1)<<endl;
		cin>>p[i].name;
		cin>>p[i].age;
		cin>>p[i].salary;
	}
	
	cout<<"Details of user "<<endl;
	
	for(int i=0;i<size;i++){
		cout<<"Name of employee "<<p[i].name<<endl;
		cout<<"Age of employee "<<p[i].age<<endl;
		cout<<"Salary "<<p[i].salary<<endl;
	}
	return 0;
}




