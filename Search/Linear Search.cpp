#include <iostream>
using namespace std;

int LinearSearch(int arr[],int n,int x){
	for(int i=0;i<n;i++){
		if(arr[i]==x){
			return i;
		}
	
	}
	return -1;
}

int main(){
	int arr[]={45,78,90,56,43,21,11};
	int n=sizeof(arr)/sizeof(arr[0]);
	int x= 90;
	int result=LinearSearch(arr,n,x);
	(result==-1)?cout<<"Element not found":cout<<"Element found at index: "<<result;

}
