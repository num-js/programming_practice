#include <iostream>
using namespace std;

int main(){

	int num=0;
	int i=2;
	cin>>num;
	while(i<num){

		if(i % 2 == 0){
			cout<<num<<" is Not a Prime No.";
			return 0;
		}

		i++;
	}

	cout<<num<<" is a Prime No.";

	return 0;
}