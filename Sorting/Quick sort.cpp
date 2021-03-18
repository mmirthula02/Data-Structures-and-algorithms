#include<iostream>
using namespace std;

void swap(int* a , int* b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

void printArray(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int Partition(int arr[],int s,int e){
	int pivot = arr[e];
	int pIndex=s;
	for(int i=s;i<e;i++){
		if(arr[i]<=pivot){
			swap(&arr[i],&arr[pIndex]);
			pIndex++;
		}
	}
	swap(&arr[e],&arr[pIndex]);
	return pIndex;

}

void QuickSort(int arr[],int s,int e){
	if(s<e){
		int p = Partition(arr,s,e);
		QuickSort(arr,s,(p-1));
		QuickSort(arr,(p+1),e);
	}
}

int main(){
	
	int arr[]={7,9,3,2,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	QuickSort(arr,0,n-1);
	cout<<"Sorted array ";
	printArray(arr,n);
	return 0;
	
}
