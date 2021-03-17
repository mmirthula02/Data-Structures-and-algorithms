#include <iostream>
using namespace std;

int binarySearch(int array[],int x,int low, int high) {
	if(low<=high){
		int mid=low+(high-low)/2;
		
		if(array[mid]==x){
			return mid;
		}
		if (array[mid]>x){
			return binarySearch(array,x,low,mid-1);
		}
		else{
			return binarySearch(array,x,mid+1,high);
		}
	}
	return -1;
}

int main() {
  int array[] = {13,44,65,76,87,98,109};
  int x = 65 ;
  int n = sizeof(array) / sizeof(array[0]);
  int result = binarySearch(array, x, 0, n - 1);
  (result==-1)?cout<<"Element not found":cout<<"Element found at index: "<<result;
   return 0;

}




