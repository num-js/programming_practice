#include <iostream>
using namespace std;

int main(){
	int a = 10;
	
	int *p = &a;
	
	cout<<"Variable: "<<a<<endl;
	cout<<"Pointer: "<<*p<<endl;
	
	cout<<"\nChange data of Pointer:-\n";
	
	*p = 5;
	
	cout<<"Variable: "<<a<<endl;
	cout<<"Pointer: "<<*p<<endl;
	
	return 0;	
}
