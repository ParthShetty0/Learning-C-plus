#include <iostream>
#include <cmath>

int main(){

    double celsius;
    double farenheit;
    char choice;

    std::cout << "*****TEMPERATURE COVERSION*****\n";
    std::cout << "F = Farenheit\n";
    std::cout << "C = Celsius\n";
    std::cout << "Choose F / C : ";
    std::cin >> choice;

    switch (choice){
        case 'F' :
        std::cout << "Enter Your Temperature in Farenheit :";
        std::cin >> farenheit;
        celsius = ((farenheit-32)*(5.0/9.0));
        std::cout << "Temperature In Celsius : " << celsius <<"\n";
        break;

        case 'C' :
        std::cout << "Enter Your Temperature in Celsius :";
        std::cin >> celsius;
        farenheit = (celsius * (9.0/5.0)) + 32;
        std::cout << "Temperature In Farenheit : " << farenheit <<"\n";
        break;
    
        default:
        std::cout << "Enter appropiate option (F/C)\n";
        break;
    }
    return 0;
}