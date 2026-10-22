#include <iostream>

int main(){
    int a,b,n;
    std::cin >> a;
    b = 3;

    while(n > b){
        n = a - b;
        a = n;
        std::cout << n << std::endl;
    }
}