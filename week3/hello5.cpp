#include <iostream>
#include <string>

int main(){
    int lower, higher, n ;
    std::string anwser;

    std::cout << "please think of a number:" << std::endl ;
    std::cin >> lower  >> higher ;
    n = (lower + higher)/2 ;
    

    while (anwser != "yes"){
    if (anwser == "greater"){
        lower = n ;
       n = (n + higher) / 2 ;
    }
    else if (anwser == "smaller"){
        higher = n ;
       n = (n + lower) / 2 ;
    }
    
    std::cout << "the number you thought of is: " << n << std::endl;
    std::cin >> anwser ;
  }
  std::cout << "over" << std::endl ;
}