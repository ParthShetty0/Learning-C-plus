#include <iostream>

int main(){

    char op;
    double num1;
    double num2;
    double result;

    std::cout << "*********** CALCULATOR ***********\n";
    std::cout << "Enter the operator (+ - * /):";
    std::cin >> op;
    std::cout << "Enter a Number :";
    std::cin >> num1;   
    std::cout << "Enter Second Number :";
    std::cin >> num2;   

    switch(op){
        case '+':
        result = num1 + num2;
        std :: cout << "Result : " << result <<"\n";
        break;

         case '-':
        result = num1 - num2;
        std :: cout << "Result : " << result <<"\n";
        break;       
         
        case '*':
        result = num1 * num2;
        std :: cout << "Result : " << result <<"\n";
        break;

        case '/':
        result = num1 / num2;
        std :: cout << "Result : " << result <<"\n";
        break;

        default:
        std::cout << "Please select appropiate option!!!\n";
        break;
    }

    std::cout <<"**********************************\n";

    return 0;
}