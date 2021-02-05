#include <iostream>
using namespace std;
int main() 
{
    int n, num, i = 1, min=INT_MAX, max=INT_MIN, sum=0, avg=0;
    cin>>n;

    while(i<=n){

    	cin>>num;
    	sum += num;

    	i++;
    }

    cout<<sum;

    return 0;
}