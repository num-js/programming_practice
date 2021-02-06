#include <iostream>
using namespace std;

int main(){
	int num;
	cin>>num;

    for(int row=num; row>=num; row--) {
    	for(int col=num; col>=row; col--){
        	cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}   