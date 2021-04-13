#include <iostream>
using namespace std;

int main(){
	int arr[2][3];
	cout<<"Enter the array integers"<<endl;
	
	for(int i=0;i<2;i++){                              // Two for loop one to access row and the other loop to access row
		for(int j=0;j<3;j++){
			cin>>arr[i][j];
		}
	}
	
	cout<<"The array ";
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			cout<<"arr["<<i<<"]"<<"["<<j<<"] = "<< arr[i][j] <<endl;
		}
	}
	return 0;
}
