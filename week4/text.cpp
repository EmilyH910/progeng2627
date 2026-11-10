#include <iostream>
#include <string>

void myswap(std::string& a, std::string& b){

    std::string tmp;

    tmp = a;
    a = b;
    b = tmp;
}

int main(){
    std::string n1,n2;
    std::cout << "please enter two texts" << std::endl;
    std::cin >> n1 >> n2;
    

    myswap(n1, n2);

    std::cout << n1 << " " << n2 << std::endl;
}