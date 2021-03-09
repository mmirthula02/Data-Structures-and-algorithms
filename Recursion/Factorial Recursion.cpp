#include <iostream>
using namespace std;

int factorial(int n){
	if (n==0 || n==1){
		return 1;
	} 
	else{
		return n*factorial(n-1);
	}
}

int main(){
	int n , result;
	cout<<"Enter a number to find the factorial";
	cin>>n;
	
	result=factorial(n);
	cout<<"Factorial of "<< n << " is " << result ;
}
