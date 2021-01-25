#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
	int rndNum = 0, gusNum=0, gusAtmp=1;
	srand(time(0));
	rndNum = rand()%100+1;
//	cout<<rndNum;
	
	do{
		cout<<"Guess Number between 1-100 : ";
		cin>>gusNum;
		
		if(gusNum > rndNum){
			cout<<"Lower Number Please\n";
		}else if(gusNum < rndNum){
			cout<<"Higher Number Please\n";
		}else{
			cout<<"Hurrah!!! \n U guess it, in "<<gusAtmp<<" Attempts";
		}
		gusAtmp++;
	}while(gusNum != rndNum);
	
	return 0;
}
