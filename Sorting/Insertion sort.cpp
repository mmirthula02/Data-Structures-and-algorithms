#include <iostream>
using namespace std;

void printArray(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void insertionsort(int arr[],int size){
	for(int step=1;step<size;step++){
		int key=arr[step];
		int j=step-1;
	
	    while(j>=0 && arr[j]>key){
	    	arr[j+1]=arr[j];
		    j=j-1;
    	}
    	arr[j+1]=key;
	}

}

int main() 
{
	int arr[]={24,14,35,20,65,98,76};
	int n=sizeof(arr)/sizeof(arr[0]);
	insertionsort(arr,n);
	cout<<"Array sorted using insertion sort :";
	printArray(arr,n);
}
