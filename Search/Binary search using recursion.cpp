#include <iostream>
using namespace std;

int binarySearch(int array[], int x, int low, int high) {
  

  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      return binarySearch(array,mid+1,high,x);

    else
      return binarySearch(array,low,mid-1,x);
  }

  return -1;
}

int main() {
  int array[] = {3, 4, 5, 6, 7, 8, 9};
  int x = 6;
  int n = sizeof(array) / sizeof(array[0]);
  int result = binarySearch(array, x, 0, n - 1);
  (result==-1)?cout<<"Element not found":cout<<"Element found at index: "<<result;
   return 0;

}




