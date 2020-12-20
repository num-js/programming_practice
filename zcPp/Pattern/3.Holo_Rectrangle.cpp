#include <iostream>
using namespace std;

int main(){

    int rowNo = 6, colNo = 12;
    cout<<"Enter Rows & Colums : \n";
    // cin>>row>>col;

    for(int row=1; row<=rowNo; row++){
        for(int col=1; col<=colNo; col++){
            if(row==1 || row==rowNo || col==1 || col==colNo){
                cout<<"*";
            }else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
    

    return 0;
}   