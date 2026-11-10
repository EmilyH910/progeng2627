#include <iostream>

double mysum(double base, int exp){
    double result = 1; 
    int sum = 0;

    for(int i = 1; i<= exp; i++){
    result = result * base;
    
    sum = sum + result;
}
    return sum;
}

int main(){
    double x;
    int n;
    std::cin >> x >> n;
    std::cout << mysum(x, n) << std::endl;
    

    }
