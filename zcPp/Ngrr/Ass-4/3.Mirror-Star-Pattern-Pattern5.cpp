#include <iostream>
#include <cmath> 
using namespace std;

int main(){

	int n;
	cin>>n;

	for(int i=1; i<=ceil(n/2.0);i++) {
	     for(int j=n-i;j>0 ;j--)
	         cout<<"   ";

	    for(int j=2*i-1;j>0 ;j--)
		    cout<<" * ";

	    cout<<endl;
	}

	for(int i=n/2; i>0;i--) {
	    for(int j=n-i;j>0 ;j--)
	         cout<<"   ";

	    for(int j=2*i-1;j>0 ;j--)
		    cout<<" * ";

	    cout<<endl;
	}

	return 0;
}