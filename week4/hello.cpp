#include <iostream>
#include <cmath>

int main(){
   int x , n , sum = 0;
   int result = 0;
   std::cin >> x >> n;
   for(int i = 1; i <= n; i++){
    std::pow(x, i);
    result = std::pow(x,i);
    sum = sum + result;
   }
   std::cout << sum << std::endl; 
}