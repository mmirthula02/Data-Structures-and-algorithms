#include <iostream>
using namespace std;

void merge(int arr[],int l,int m,int r , int size){
	int i=l;                 //Initialize three variables in order to track the indices of temp array , left array and right array
	int j=m+1;
	int k=l;
	
	int temp[size];         //Create temporary array
	
	while(i<=m&&j<=r){
		if(arr[i]<=arr[j]){
			temp[k]=arr[i];
			i++ ;
			k++;
		}
		else{
			temp[k]=arr[j];
			j++;
			k++;
		}
	}
	
	while(i<=m){
		temp[k]=arr[i];                  //Copy the remaining elemnents of first half , if there is any
		i++;
		k++;
	}
	while(j<=r){                        //Copy the remaining elements of second half if there is any
		temp[k]=arr[j];
		j++;
		k++;
	}
	
	for(int p=l;p<=r;p++){
		arr[p]=temp[p];
	}
}


void mergeSort(int arr[],int l,int r,int size){
	if(l<r){
		int m=(l+r)/2;
		mergeSort(arr,l,m,size);
		mergeSort(arr,m+1,r,size);
		merge(arr,l,m,r,size);
	}
}

int main()
{
    cout << "Enter size of array: " << endl;
    int size;
    cin >> size;
    int array[size];
 
    cout << "Enter " << size << " integers in any order: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
    mergeSort(array, 0, (size - 1), size); // mergesort(arr,left,right) called
 
    cout << "After Sorting" << endl;
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
 
    return 0;
}
