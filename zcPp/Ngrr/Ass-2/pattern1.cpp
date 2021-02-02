#include <iostream>
using namespace std;

int main(){
	
	int num, x=1;
	cin>>num;

	int row = 1;
	while(row <= num){

		int col=1;
		while(col <= row){

			cout<<x<<"\t";
			x++;
			col++;
		}

		cout<<endl;
		row++;
	}

	return 0;
}
