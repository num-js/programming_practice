/*
 Question is :

Take the following as input.

A number (N1)
A number (N2)
Write a function which prints first N1 terms of the series 3n + 2 which are not multiples of N2.


*/
#include <iostream>
// using namespace ;

int main()
{
    int number1, number2;
    std::cin>>number1>>number2;
    
      int count =1; 
      int i=1;  ///CHANGE
      while(count<=number1) ///CHANGE
      {
        int num = (3*i)+2;
        i++;
        if(!(num%number2)==0){
        	std::cout<<num<<"\n";
            count++;
        }
      }

    return 0;
}