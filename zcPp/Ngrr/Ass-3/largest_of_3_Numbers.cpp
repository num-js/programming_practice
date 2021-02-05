#include <iostream>
using namespace std;

int main(){

	int num, lrg=INT_MIN;
	cin>>num;
	
	int arr[num];

	for(int i=0; i<num; i++){
		cin>>arr[i];
		
		cout<<arr[i]<<endl;
		
		if(lrg<arr[i]){
			lrg = arr[i];
		}
	}

	cout<<"Largest No. is : "<<lrg;

	return 0;
}