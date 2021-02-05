#include <iostream>
#include <math.h>
int main()
{
    int num;
    std::cin>>num;
    bool isPrime = true;
    
    int i = 2;
    while(i <= sqrt(num)){
      if(num % i == 0){
        isPrime = false;
        break;
      }
      i++;
    }

    if (isPrime){
      std::cout<<"Prime";
    }else{
      std::cout<<"Not Prime";
    }


    return 0;
}