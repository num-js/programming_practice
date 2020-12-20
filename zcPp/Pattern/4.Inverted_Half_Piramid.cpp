#include <iostream>
using namespace std;

int main(){

    int num = 5;
    cout<<"\n\t---Inverted Half Piramid--- \n";

    for(int i=num; i>0; i--){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}   