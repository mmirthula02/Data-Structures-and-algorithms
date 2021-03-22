#include <iostream>
using namespace std;

void shellSort(int arr[], int n)
{
 for(int gap=n/2;gap>0;gap /= 2)
 {
 for(int j = gap;j<n;j+=1)
 {
 int temp = arr[j];
 int i=0;
 
 for(i=j;(i>=gap)&&(arr[i-gap]>temp);i-=gap)
 {
 arr[i] = arr[i-gap];
 }
 arr[i] = temp;
 }
 }
}

void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int arr[]={190,75,908,100,69,3,29,78,10};
	int n=sizeof(arr)/sizeof(arr[n]);
	shellSort(arr,n);
	cout<<"After sorting ";
	printArray(arr,n);
}
