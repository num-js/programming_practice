#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key){
	for(int i=0; i<n; i++){
		if(arr[i] == key){
			cout<<endl<<"\t"<<key<<" Founded at the Position of: "<<i+1;
			return 0;
		}
	}
	
	cout<<endl<<"\t"<<key<<" Not Found...";
	return 0;
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
	
	linearSearch(arr, n, key);

    return 0;
}   
