#include <iostream>
using namespace std;

void linearSearch(int arr[], int num, int searchNumber){
	
	bool numberNotFounded = true;
	
	for(int i=0; i<num; i++){
		if(searchNumber == arr[i]){
			cout<<searchNumber<<" Number is found at position: "<<i+1;
			numberNotFounded = false;
			break;
		}
	}
	
	if(numberNotFounded){
		cout<<searchNumber<<" Number is Not founded";
	}
}

int main(){
	
	int num, arr[num], searchNumber;
	cout<<"How many Elements u want to insert? \n";
	
	cin>>num;
	
	cout<<"\n Enter ut Numbers:- \n";
	for(int i=0; i<num; i++){
		cin>>arr[i];
	}
	
	cout<<"\n Enter the Number u want to search:- ";
	cin>>searchNumber;
	
	linearSearch(arr, num, searchNumber);
	
    return 0;
}   
