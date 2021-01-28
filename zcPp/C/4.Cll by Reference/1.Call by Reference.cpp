#include <iostream>
using namespace std;

void swapByRef(int *a, int *b){
	*a = *a + *b; 	//15
	*b = *a - *b;	//5
	*a = *a - *b;	//10
}

int main(){

	int a = 5, b= 10;
	
	cout<<"Before Swap: "<<a<<"\t"<<b<<endl;
	swapByRef(&a, &b);			
	cout<<"After Swap: "<<a<<"\t"<<b;
	
	return 0;
}
