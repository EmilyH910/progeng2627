
#include <iostream>
#include <vector>

int main(){

    int n;
    std::cin >> n;

    std::vector<int> numbers;

    for(int i = 0; i < n; i++){
        int tmp;
        std::cin >> tmp;
        numbers.push_back(tmp);
    }

    int t;
    std::cin >> t;

    for(int i = 0; i < numbers.size(); i++){

        if(numbers[i] < t){
            std::cout <<"the numbers are" << numbers[i] << std::endl;
        }
    }
}
