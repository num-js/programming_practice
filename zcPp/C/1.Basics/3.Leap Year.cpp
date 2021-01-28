#include <iostream>
using namespace std;

int main(){
	int year;
    
	cout<<"Enter a Numnber to Check Leap Year or not: ";
    cin>>year;
    
    if(year % 4 == 0 && year % 100 && 400){
    	cout<<year<<" is a Leap Year";
	}else{
		cout<<year<<" is not a Leap Year";
	}
    
    return 0;
}   
