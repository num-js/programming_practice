#include <iostream>

int main(){

	int num;
    std::cin>>num;
    int row,col,val;
    for(row=1;row<=num;row++) {
        for(col=1;col<=num-row;col++)
            std::cout<<" "<<"\t";

        val=row;
        for(col=1;col<=row;col++) {
            std::cout<<val<<"\t";
            val++;
        }

        val=row;
        for(col=1;col<=row-1;col++) {
            std::cout<<val<<"\t";
             val++;
        }

        std::cout<<std::endl;
    }

	return 0;
}