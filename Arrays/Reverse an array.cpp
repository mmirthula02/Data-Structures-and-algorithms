#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverse_array(int arr[],int start,int end){
	
	while (start<end){                                                        //Time complexity o(n)
		int temp =arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
		
		
	}
	
	
}

printarray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	
	int n, arr[10];
	cout<<"Enter size of array"<<endl;
	cin>>n;
	cout<<"Enter the elements"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	reverse_array(arr,0,n-1);
	cout<<"Array after reverse: ";
	printarray(arr,n);
	return 0;
}
