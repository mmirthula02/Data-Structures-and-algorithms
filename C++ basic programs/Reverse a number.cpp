#include <iostream>
using namespace std;

int main(){
	
	int n , remainder , reversed_number=0;
	cout<<"Enter a number";
	cin>>n;
	
	while(n!=0){
		remainder=n%10;
		reversed_number=(reversed_number)*10+remainder;
		n/=10;
	}
	
	cout<<"Reversed number "<< reversed_number;
	return 0;
}
