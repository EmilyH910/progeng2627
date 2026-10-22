#include <iostream>

int main(){
    int n , p;
    std::cout << "please enter an integer greater" << std::endl;
    std::cin >> n;
    for(int p = 2; p < n; p++) {
        if((n % p) == 0) {
            std::cout << "not a prime number" << std::endl;
            return 0;
        }
    }
     std::cout << "prime number" << std::endl;
     return 0;
        
    }
