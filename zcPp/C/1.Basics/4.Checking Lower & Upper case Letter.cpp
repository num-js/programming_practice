#include <iostream>
using namespace std;

int main(){
	char ch1;
    
    cout<<"Enter a Character to check Uppercase & Lowercase: ";
	cin>>ch1;
	
	int n = ch1;
    
//	cout<<n;
	
	if(n >= 65 && n <= 90){
		cout<<ch1<<" is a Upper Case Letter";
	}else if(n >= 97 && n <= 122){
		cout<<ch1<<" is a Lower Case Letter";
	}else{
		cout<<ch1<<" is not a Letter";
	}
    
    return 0;
}   
