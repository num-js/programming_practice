#include<iostream>

int main()
{
     int num, i, j;
     std::cin>>num;

     for(i=1;i<=num;i++) {
          if(i%2==1) {
               for(j=1;j<=i;j++)
                    std::cout<<"1";
          } else {
               std::cout<<"1";
               for(j=1;j<=i-2;j++)
                    std::cout<<"0";
               std::cout<<"1";
          }
          std::cout<<"\n";
     }
}