#include <iostream>
using namespace std;

int main(){

	int num, sum=0;
	cin>>num;
	
	int arr[num];
	
	for(int i=0; i<num; i++){
		cin>>arr[i];
		sum = sum + arr[i]; 
	}

	cout<<"Sum is: "<<sum;


	// cout<<"Ur Entered Numbers :- "<<endl;
	// for(int i=0; i<num; i++){
	// 	cout<<arr[i]<<endl;
	// }	

	return 0;
}