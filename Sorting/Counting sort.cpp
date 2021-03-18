#include <iostream>
using namespace std;

void Countsort(int input_array[],int size , int range){
	int output_array[size];
	int count_array[range];
	
	for(int i=0;i<range;i++){                               //Create  count array and initialize it as zero
		count_array[i]=0;
	}
	
	for(int i=0;i<size;i++){                                 // input array has the index position of count array
		++count_array[input_array[i]];
	}
	for(int i=1;i<range;i++){
		count_array[i]=count_array[i]+count_array[i-1];          // Cummulative addition of count array
	}
	for(int i=0;i<size;i++){
		output_array[--count_array[input_array[i]]]=input_array[i];
	}
	for(int i=0;i<size;i++){
		input_array[i]=output_array[i];           //Transferring the elements in output array to input array
	}
}

void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int arr[]={2,2,5,4,6,4,7,3,4};
	int n = sizeof(arr)/sizeof(arr[0]);
	int range = 10;
	cout<<"Sorted array: ";
	Countsort(arr,n,range);
	printArray(arr,n);
	return 0;
	
}
