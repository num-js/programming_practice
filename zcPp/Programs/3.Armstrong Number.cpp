#include <iostream>
#include <math.h>
using namespace std;

int main(){
	cout<<"Enter a Number to Reverce : ";
	int num;
	cin>>num;
	
	int orgNum = num;
	int sum = 0;
	
	while(num>0){
		int lastDigit = num%10;
		
		sum+= pow(lastDigit, 3);
		
		num = num / 10;
	}
	
	if(orgNum == sum){
		cout<<orgNum<<" is a Armstrong Number";
	}else{
		cout<<orgNum<<" is Not a Armstrong Number";
	}
	
	return 0;
}
