#include <iostream>
using namespace std;

int fact(int num){
	if(num==1 || num==0){
		return 1;
	}else{
		return num * fact(num-1);
	}
}

int main(){
	int n=0;
	cin>>n;
	cout<<"Factorial of "<<n<<" is : "<<fact(n);
	
	return 0;
}

