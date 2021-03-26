#include <iostream>
using namespace std;

int main(){
	int n , num , rev=0,remainder;
    cout<<"Enter a number to check if it is a palindrome or not ";
    cin>>num;

    n=num;
    
    do{
    	remainder = num%10;
    	rev = (rev)*10 + remainder;
    	num=num/10;
	}while(num!=0);
	
	if(n==rev){
		cout<<"Palindrome";
	}else{
		cout<<"Not a Palindrome";
	}
	
	return 0;
}


