#include <iostream>
using namespace std;

void linearSearch(int arr[], int num, int searchingNum){
	for(int i=0; i<num; i++){
		if(searchingNum == arr[i]){
			cout<<searchingNum<<" Number founded at the position: "<<i+1;
		}else{
			cout<<searchingNum<<" Number not Found";
		}
	}
}

int main(){
    int num,i, searchingNum;
    cout<<"Enter How many Numbers u want to Enter?\n";
    cin>>num;
	
	int arr[num];
	
	for(i=0; i<num; i++){
		cin>>arr[i];
	}
	
	cout<<"Enter a Number to Search: ";
	cin>>searchingNum;
	
	linearSearch(arr, num, searchingNum);
	
	
    return 0;
}   
