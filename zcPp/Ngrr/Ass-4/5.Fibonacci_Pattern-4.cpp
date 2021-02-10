#include <iostream>

int main(){
	
    int N,row,col,n2=1,n1=0,sum=0;
    std::cin>>N;

    for(row=1;row<=N;row++) {
        for(col=1;col<=row;col++) {
            std::cout<<n1<<"  ";
            sum=n1+n2;
            n1=n2;
            n2=sum;
        }
        std::cout<<"\n";
    }



	return 0;
}