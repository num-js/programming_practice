#include <iostream>
using namespace std;
int main() {
    int num;
    cin>>num;

    int reversed=0;
    while(num>0){

    	int lastDigit = num % 10;

    	reversed = reversed * 10 + lastDigit;

    	num = num/10;
    }

    cout<<reversed;

    return 0;
}