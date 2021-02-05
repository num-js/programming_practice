#include <iostream>

using namespace std;

int main(){
	int n1, n2, lrgDvisr = INT_MIN;
	cin>>n1>>n2;

	int lrgBoth = 0;
	if(n1>n2)
		lrgBoth = n1;
	else
		lrgBoth = n2;

	int i=1;
	while(i<lrgBoth){
		if(n1%i==0 && n2%i==0){
			if(i >= lrgDvisr){
				lrgDvisr = i;
			}
		}
		i++;
	}

	cout<<lrgDvisr;

	return 0;
}