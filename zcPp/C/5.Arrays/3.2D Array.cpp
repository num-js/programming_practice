#include <iostream>
using namespace std;

int main(){

	int nStdnt = 3;
	int nSubjct = 4;
	
	int marks[nStdnt][nSubjct];

	for(int row=0; row<nStdnt; row++){
		for(int col=0; col<nSubjct; col++){
			cout<<"Student No. "<<row+1<<" Enter Marks of Subject No. "<<col+1<<" : ";
			cin>>marks[row][col];
		}
	}

	cout<<endl<<"Marks of the Students : \n";
	for(int row=0; row<nStdnt; row++){
		for(int col=0; col<nSubjct; col++){
			cout<<"Student No. "<<row+1<<" Marks of Subject No. "<<col+1<<" is : "<<marks[row][col]<<endl;
		}
	}
	
	
	return 0;
}
