#include <iostream>

int main(){
    int n,sum;
    double average,time;
    average = 0;
    time = 0.0;
    sum = 0;

    std::cin >> n ;

    while(n!=0 ){
        time = time + 1.0;
        sum = sum + n;
        average = sum / time;
        std::cout <<"the average so far is" << average << std::endl;
        std::cin >> n;
    }
}