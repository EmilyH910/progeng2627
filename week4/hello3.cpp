#include <iostream>
bool leap_year(int year){
    bool ly = false;
    if ((year % 4 == 0)&&(year % 100 ==0)&&(year % 400 == 0)){
        ly = true;
    }
    

    return ly;
    
}
int main(){
    std::cout << (leap_year(1600) == true) << std::endl;
    std::cout << (leap_year(1700) == false) << std::endl;
}