#include <iostream>
using namespace std;
int main() 
{
	int num;
	cin>>num;
	

	int no=2;
	int i=2;

	while(no <= num){

		bool isPrime = true;
		
		while(i<no){

			if(no%i==0){
				cout<<i<<endl;
			}

			i++;
		}

		// if(isPrime==true){
		// 	cout<<i<<' ';
		// }

		no++;
	}

    return 0;
}