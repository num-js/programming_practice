#include <iostream>
using namespace std;

int main(){
	int num;
    cout<<"Enter a Number to print Tables: ";
	cin>>num;
	
	for(int i=10; i>=1; i--){
		cout<<num<<" * "<<i<<" = "<<num*i<<endl;
	}
    
    return 0;
}   
