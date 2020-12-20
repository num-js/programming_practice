#include <iostream>
using namespace std;

int main(){
	cout<<"Enter a Number to Reverce : ";
	int num;
	cin>>num;
	
	int actualNum = num;
	int reverse;
	
	while(num>0){
		int lastDigit = num % 10;
		reverse = reverse * 10 + lastDigit;
		
		num = num / 10;
	}
	
	cout<<"Actual Number : "<<actualNum<<endl;
	cout<<"Reversed Number : "<<reverse<<endl;
	
	return 0;
}
