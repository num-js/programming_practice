#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int num){
	for(int i=2; i<num; i++){
		if(num%i==0){
			return false;
		}
	}
	
	return true;
}

int main() {
	cout<<"Enter 2 numbers to print between Prime Numbers: ";

	int num1;
	int num2;
	
	cin>>num1;
	cin>>num2;
	
	for(int i=num1; i<num2; i++){
		if(isPrime(i)){
			cout<<i<<endl;	
		}
	}
	
	
	return 0;
}





