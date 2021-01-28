#include <iostream>
using namespace std;

int main(){
	int num;
    cout<<"Enter a Number to print upto N prime numbers: ";
	cin>>num;
	
	// 5 * 3 = 15  ==== 5 % 3 = 0 ==== not a prime Number
	
	cout<<"Printing Prime Numbers upto "<<num<<endl;
	for(int i=2; i<num; i++){
		for(int j=2; j<i; j++){
			if(! (i % j == 0)){
				cout<<i<<endl;
				break;
			}
		}
	}
	
	
    return 0;
}   
