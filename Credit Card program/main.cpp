#include <iostream>

int getdigit(const int Number);
int getSumOdd(const std::string CardNumber);
int getSumEven(const std::string CardNumber);

int main(){
    std::string CardNumber;
    int result;

    std::cout << "Enter a Credit Card Number : ";
    std::cin >> CardNumber;

    result = getSumEven(CardNumber) + getSumOdd(CardNumber);
    
    if(result % 10 == 0){
        std::cout << "Your Card " << CardNumber << " is Valid\n";
    }
    else{
        std::cout << "Your Card " << CardNumber << " is Not Valid\n";
    }
    return 0;
}

int getdigit(const int Number){
    return Number % 10 + (Number/10 % 10);
}
int getSumOdd(const std::string CardNumber){
    int sum = 0;

    for(int i = CardNumber.size() - 1; i >= 0 ; i-=2){
        sum +=(CardNumber[i] - '0');
    }
    return sum;
    }

int getSumEven(const std::string CardNumber){
    int sum = 0;

    for(int i = CardNumber.size() - 2; i >= 0 ; i-=2){
        sum += getdigit((CardNumber[i] - '0')* 2);
    }
    return sum;
}