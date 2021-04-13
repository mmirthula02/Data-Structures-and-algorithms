#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int getoddoccurence(int arr[],int n){                                           //Time complexity o(n)
	for(int i =0;i<n;i++){
		int count=0;
		for(int j=0;j<n;j++){
			if(arr[i]==arr[j]){
				count++;
			}
		}
		if(count%2!=0){ 
		return arr[i];
		}
	}
	return -1;
}

int main(){
	int arr[]={2,2,3,3,3,4,4,5,5,6,6,7,7,8,8};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<getoddoccurence(arr,n);
	return 0;
}
