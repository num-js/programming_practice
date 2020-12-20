#include <iostream>
using namespace std;

int main(){
	int num;
    cout<<"Enter a Number to print it's Factorial: ";
	cin>>num;
	
	int factorial = 1;
	for(int i=num; i>=2; i--){
		factorial *= i;
	}
	cout<<"Factorial of "<<num<<" is: "<<factorial;

    return 0;
}   
