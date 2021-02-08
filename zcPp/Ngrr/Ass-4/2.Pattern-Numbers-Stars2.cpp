#include <iostream>
using namespace std;

int main(){

	int i,j,num,k;
	cin>>num;

	for(i=1;i<=num;i++) {
        for(j=1;j<=i;j++)
        	cout<<j;
	
		for(k=num;k>=j;k--)
        	cout<< "*";
					
		cout<<" "<<endl;
    }
            

	return 0;
}