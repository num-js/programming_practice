#include <iostream>
using namespace std;

int main(){
	
	int a=0,b=1,c, num=0;
	
	cout<<"Enter the End Point: ";
	cin>>num;
	
	for(int i=2; i<num; i++){
		c = a+b;
		a = b;
		b=c;
		cout<<c<<endl;
	}
	
	return 0;
}

