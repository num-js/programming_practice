#include <iostream>
using namespace std;

int main(){

	int marks[5];
	
	int *ptr = &marks[0];
	
	for(int i=0; i<5; i++){
		cout<<"\nEnter Marks of the Student "<<i+1<<" : ";
		cin>>*ptr;
		*ptr++;
	}
	
	for(int i=0; i<5; i++){
		cout<<"\n Marks of the Student "<<i+1<<" is : "<<marks[i];
	}
	
	
	return 0;
}
