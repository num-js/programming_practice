#include <iostream>
using namespace std;

int main(){
	int start, end;
    
	cout<<"Enter a starting Numnber to print Even Odd Numbers: ";
    cin>>start;

	cout<<"Enter a Ending Numnber to print Even Odd Numbers: ";
    cin>>end;
    
    for(int i=start; i<end; i++){
    	if(i % 2 == 0){
	    	cout<<i<<" is an Even Number"<<endl;
		}else{
			cout<<i<<" is an Odd Number"<<endl;
		}
	}
	
    return 0;
}   
