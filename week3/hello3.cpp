#include <iostream>

int main(){
    
   int x, factorial = 1 ;

    std::cin >> x;
    for(int counter = 1; counter <=   x; counter++){

        factorial = factorial * counter;
    }

    std::cout << x << "!" << " = " << factorial << std::endl;

}
