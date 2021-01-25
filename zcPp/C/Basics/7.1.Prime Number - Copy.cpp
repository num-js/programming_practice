#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int strtNum, endNum;
	cout<<"Enter Starting Point: ";
	cin>>strtNum;
	cout<<"Enter Ending Point: ";
	cin>>endNum;
	
	for(int i=strtNum; i<endNum; i++){
		for(int j=2; j<i; j++){
			if(!(i % j == 0)){
				cout<<i<<"\t";
				break;
			}
		cout<<i<<"\t";
		}
	}
	
    return 0;
}   
