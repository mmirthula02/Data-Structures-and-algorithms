#include <iostream>
using namespace std;

void swap(int* a , int* b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void bubblesort(int arr[],int size){
	for(int step=0;step<size-1;step++){
		for(int i=0;i<size-step-1;i++){
			if(arr[i]>arr[i+1]){
				swap(&arr[i],&arr[i+1]);
			}
		}
	}
	
		
}

int main(){
	int arr[]={24,14,56,98,78};
	int n=sizeof(arr)/sizeof(arr[0]);
	bubblesort(arr,n);
	cout<<"Array sorted using bubble sort"<<endl;
	printArray(arr,n);
	return 0;
	
}
