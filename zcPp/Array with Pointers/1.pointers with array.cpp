#include <iostream>
using namespace std;

int main(){

	int marks[] = {8, 5, 6, 2, 9};
	
	int* p = marks;
	
	for(int i; i<5; i++){
		cout<<"Value of Marks["<<i<<"]: "<<*(p+i)<<endl;
	}
	
	return 0;
}
