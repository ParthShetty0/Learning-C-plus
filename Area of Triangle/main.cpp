#include <iostream>
#include <cmath>

int main(){

    float base;
    float height;
    double hypotenuse;
    double area;


    std :: cout << "Right Angled Triangle Calulator\n";
    std :: cout << "Enter base of Triangle : ";
    std :: cin >> base;
    std :: cout << "Enter height of Triangle : ";
    std :: cin >> height;

    area = (base * height)/2;
    hypotenuse = sqrt(pow(base, 2) + pow(height, 2));


    std :: cout << "Area of Triangle is " << area << " cm\n";
    std :: cout << "The Hypotenuse of Triangle is of length " << hypotenuse << " cm\n";

    return 0;
}