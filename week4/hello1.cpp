#include <iostream>

double mypow(double base, int exp){
    double result = 1; 

 if(exp > 0){
    for(int i = 1; i<= exp; i++){
    result = result * base;
    }
    return result;
}
else if(exp < 0){
    for(int i = 1; i<= -exp; i++){
    result = result * base;
    }
    result = 1/ result;
    return result;
    
}
return result;
}

int main(){
    double x;
    int n;
    std::cin >> x >> n;
    std::cout << x << "^" << n << "=" << mypow(x, n) << std::endl;
    

    }

    
