#include <iostream>
using namespace std;

int findMax(int A[],int n){
	if(n==1){
		return A[0];
	}
	else{
		return max(A[n-1],findMax(A,n-1));
	}
}

int findMin(int A[],int n){
	if(n==1){
		return A[0];
	}
	else{
		return min(A[n-1],findMin(A,n-1));
	}
}

int main(){
	int A[] = {24,78,94,11,87};
	int n = sizeof(A)/sizeof(A[0]);
	cout<<"Maximum :"<<findMax(A,n)<<"\n";
	cout<<"Minimum :"<<findMin(A,n);
}
