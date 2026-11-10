#include <iostream>

void interger(int a, int b,
               int& division, int& remainder){

    division = a/b;
    remainder = a%b;
}

int main(){
    int a1, b1;
    std::cout << "Enter a and b: " << std::endl;
    std::cin >> a1 >> b1;

    int d, r;

    interger(a1, b1, d, r);

    std::cout << "division: " << d << std::endl;
    std::cout << "remainer: " << r << std::endl;
}