#include <iostream>
using namespace std;

void swap(int* a , int* b){
	int temp = *a;
	*a=*b;
	*b=temp;
}

void printArray(int arr[] ,int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void selectionsort(int arr[],int size){
	for(int step=0;step<size-1;step++){
		int min_index=step;
		for(int i=step+1;i<size;i++){
			if(arr[i]<arr[min_index]){
				min_index=i;
			}
		
		
		}
		swap(&arr[min_index],&arr[step]);
	}
}

int main(){

	int arr[]= {65,78,15,45,23,17,39,55,7};
	int n= sizeof(arr)/sizeof(arr[0]);
	selectionsort(arr,n);
	cout<<"Sorted array is : " <<endl;
	printArray(arr,n);
	
	
}
