#include <iostream>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    int row=1,i,val=1,number=1;
    while(row<=n)
    {
        int spaces=1;
        while(spaces<=n-row)
        {
            cout<<"  ";
            spaces=spaces+1;
        }
        for(int i=row;i<=2*row-1;i++)
        {
            cout<<i<<" ";

        }
        for(int i=2*row-2;i>=row;i--)
        {
            cout<<i<<" ";
        }
        spaces=1;
        while(spaces<=n-row)
        {
            cout<<" ";
            spaces=spaces+1;
        }

        cout<<endl;
        row=row+1;

    }
    
}
