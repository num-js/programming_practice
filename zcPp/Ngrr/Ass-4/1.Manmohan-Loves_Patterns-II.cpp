#include <iostream>
using namespace std;

int main(){

	int num, i, j;
	cin>>num;

    for(i = 0;i<num;i++) {
        if(i==0)
            cout << 1<<endl;
        else {
	        for(j=0;j<=i;j++) {
	            if(j==0 || j==i)
	                cout<<i;
	            else
	                cout<<0;
	        }
	        cout << endl;
	    }
    }

	return 0;
}