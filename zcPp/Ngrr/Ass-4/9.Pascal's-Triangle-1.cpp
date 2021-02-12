#include<iostream>
using namespace std;

int fact(int n)
{
     int ans=1;
     for(int i=1; i<=n; i++)
     {
          ans*=i;
     }
     return ans;
}

int ncr(int n, int r)
{
     int ans=1;
     ans=fact(n)/(fact(r)*fact(n-r));
     return ans;
}

int main()
{
     int n; 
     cin>>n;

     for(int i=0; i<n; i++)
     {   cout<<" ";
          int space=n-i-1;
          while(space>0)
          {
               cout<<" ";
               space--;
          }
          for(int j=0; j<=i; j++)
          {
               cout<<ncr(i,j)<<" ";
          }
          cout<<endl;
     }
}