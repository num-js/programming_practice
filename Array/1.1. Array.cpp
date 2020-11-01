#include <iostream>
using namespace std;

int main(){
	
	int n, arr[n];
	
	cout<<"How many Numbers u want to Enter: ";
	cin>>n;
	
	for(int i=0; i<n; i++){
		cout<<"Enter "<<i+1<<" th Number:- ";
		cin>>arr[i];
	}
	
	int maxNo=INT_MIN, minNo=INT_MAX;
	
	for(int i=0; i<n; i++){
//		if(arr[i] > maxNo){
//			maxNo = arr[i];
//		}
//		
//		if(arr[i] < minNo){
//			minNo= arr[i];
//		}

		//Using Functions
		maxNo = max(maxNo, arr[i]);
		
		minNo = min(minNo, arr[i]);
	}
	
	cout<<"Max Number : "<<maxNo<<endl;
	cout<<"Min Number : "<<minNo;
	
    return 0;
}   
