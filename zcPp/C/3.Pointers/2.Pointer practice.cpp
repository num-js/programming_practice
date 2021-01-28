#include <iostream>
using namespace std;

void usePointer(int *a, int *b){
	cout<<"Fun Addr..: "<<&a<<"\t"<<&b<<endl;
}

int main(){

	int a = 5, b= 10;
	
	cout<<"Address: "<<&a<<"\t"<<&b<<endl;
	usePointer(&a, &b);			
	
	return 0;
}
