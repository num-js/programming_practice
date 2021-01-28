#include <iostream>
using namespace std;

int main(){
	int num;
    
	cout<<"Enter a Numnber to Check Even Odd: ";
    cin>>num;
    
    (num % 2 == 0) ? cout<<num<<" is an Even Number" : cout<<num<<" is an Odd Number";
	
    return 0;
}   
