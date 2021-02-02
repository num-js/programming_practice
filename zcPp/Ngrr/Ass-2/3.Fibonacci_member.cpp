#include <iostream>
using namespace std;

int main(){

	int num;
	cin>>num;

	int a = 1, b = 2, c=0;
	int i=1;

	while(i<=num){
		c = a + b;
		if(c==num){
			cout<<"Yes "<<c<<" is the Number of Fibonacci Series"<<endl;
			return 0;
		}
		a=b;
		b=c;
		i++;
	}

	cout<<"No "<<num<<" is Not a member of Fibonacci Series";



	return 0;
}