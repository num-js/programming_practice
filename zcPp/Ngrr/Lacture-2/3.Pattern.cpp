#include <iostream>
using namespace std;
int main() 
{
	int num;
	cin>>num;
	

	int no=2;
	while(no <= num){

		bool isPrime = true;
		
		int i=2;
		while(i<no){

			if(no%i==0){
				isPrime = false;
			}

			i++;
		}

		if(isPrime){
			cout<<num<<' ';
		}

		no++;
	}

    return 0;
}