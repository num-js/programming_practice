#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
	
	
	
}

int main(){
	
	int n, arr[n];
	
	cout<<"How many Elements u want to Enter: ";
	cin>>n;
	
	cout<<endl;
	for(int i=0; i<n; i++){
		cout<<"Enter "<<i+1<<" th Number:- ";
		cin>>arr[i];
	}
	
	cout<<"\nEnter the Number u want to Search: ";
	int key;
	cin>>key;
	
	binarySearch(arr, n, key);

    return 0;
}   
