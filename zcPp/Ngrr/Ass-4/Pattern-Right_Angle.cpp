#include <iostream>
using namespace std;

int main(){

	int num;
	cin>>num;
	int x, y;
	for(int i=num-1; i>=0; i--){
		for(x=1; x<=i; x++){
			cout<<x;
		}
		for(y=1; y<=num; y++){
			cout<<"y";
		}


		cout<<endl;
	}

	return 0;
}
