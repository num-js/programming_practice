#include <iostream>
using namespace std;

void printArr(int *marks, int len){
	for(int i=0; i<len; i++){
		cout<<"Marks: "<<*marks++<<endl;
	}
}

int main(){

	int marks[5] = {5, 9, 6, 2, 4};
	
	printArr(marks, 5);
	
	
	return 0;
}
