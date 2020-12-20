#include <iostream>
using namespace std;


int binarySearch(int arr[], int num, int searchNumber){
	int start=0, end=num;

	while(start<=end){
		int mid = (start+end) / 2;
		if(arr[mid] == searchNumber){
			cout<<"Number found";
			return 0;
		}else if(arr[mid] <= searchNumber){
			start = mid+1;
		}else{
			end = mid-1;
		}
	}
	
	return -1;
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
	
	binarySearch(arr, num, searchNumber);
	
    return 0;
}   
