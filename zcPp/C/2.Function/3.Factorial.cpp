#include <iostream>
using namespace std;

int fact(int n){
	if(n==0 || n==1){
		return 1;
	}else{
		return n  = n * fact(n-1);
	}
}

int main(){
	
	int num = 0;
	cout<<"Enter the Number to check it's Factorial: ";	
	cin>>num;
	
	cout<<"Factorial of "<<num<<" is: "<<fact(num);
	
	return 0;
}

