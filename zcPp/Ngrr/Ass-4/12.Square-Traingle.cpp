#include <iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;

    for(int row=1; row<=num; row++){
        for(int col=1; col<=num; col++){
            cout<<col;
        }
        cout<<"\n";
    }


    return 0;
}