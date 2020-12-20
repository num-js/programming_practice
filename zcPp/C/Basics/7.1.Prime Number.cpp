#include <iostream>
using namespace std;

int main(){
	int num;
    cout<<"Enter a Number to check its prime or not: ";
	cin>>num;
	
	bool isPrime = true;
	
	// 5 * 3 = 15  ==== 5 % 3 = 0 ==== not a prime Number
	
	for(int i=2; i<num; i++){
		cout<<"Checking is "<<num<<" % "<<i<<" == 0 \n";
		if(num % i == 0 ){
			isPrime = false;
			break;
		}
	}
	
	if(isPrime){
		cout<<num<<" is a Prime Number";
	}else{
		cout<<num<<" is Not a Prime Number";
	}
	
    return 0;
}   
