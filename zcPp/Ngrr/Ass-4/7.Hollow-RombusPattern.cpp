#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int i=1;
	while(i<=n){
		int space=1;
		while(space<=n-i){
			cout<<" ";
			space++;
		}
		if(i==1 || i==n){
			int k=1;
			while(k<=n){
				cout<<"*";
				k++;
			}
		}
		else{
			cout<<"*";
			int p=1;
			while(p<=n-1){
				cout<<" ";
				p++;
			}
			cout<<"*";
		}
		i++;
		cout<<endl;
	}
	return 0;
}