#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int num;
	bool isPrime = true;
	
	cout<<"Enter A Number to check Prime Number or Not: ";
	cin>>num;
	
	for(int i=2; i<sqrt(num); i++){
		if(num%i==0){
			isPrime = false;
			cout<<num<<" is Not a Prime Number";
			break;
		}
	}
	
	if(isPrime){
		cout<<num<<" is a Prime Number";
	}
	
	return 0;
}





