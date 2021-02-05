#include <iostream>

int main()
{
    int lrg = INT_MIN, num, i = 1;
    std::cout<<lrg;
    while(i<=5){
      std::cin>>num;
      if(num > lrg){
        lrg = num;
      }
      i++;
    }
    std::cout<<lrg;
    
    return 0;
}