
#include <iostream>

void rectangle(double length, double width,
               double& perimeter, double& area){

    perimeter = 2 * (length + width);
    area = length * width;
}

int main(){
    double l, w;
    std::cout << "Enter length and width: " << std::endl;
    std::cin >> l >> w;

    double p, a;

    rectangle(l, w, p, a);

    std::cout << "Perimeter: " << p << std::endl;
    std::cout << "Area: " << a << std::endl;
}
