#include <iostream>
using namespace std;

int main(){
	
	int num, i=1;

	cin>>num;


	while(i<=num){

		int j=1;
		while(j<=i){
			if((i+j) % 2 == 0){
				cout<<"1\t";
			}else{
				cout<<"0\t";
			}
			j++;
		}

		cout<<endl;
		i++;
	}

	return 0;
}