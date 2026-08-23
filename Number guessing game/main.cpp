#include <iostream>
#include <ctime>

int main(){

    srand(time(NULL));

    int number = rand() % 100 + 1 ;
    int guess = 0;
    int tries = 0;
    
    do{
        std::cout << "*******NUMBER GUESSING GAME*********\n";
        std::cout << "Choose a number between 1-100 :";
        std::cin >> guess;
        std::cin.clear();
        fflush(stdin);
        
        if(guess < 0 || guess > 100){
            std::cout << "Invalid Option !!!\n";
        }
        else if(guess < number){
            std::cout << "TOO LOW !!!\n\n";
            tries++;
        }
        else if(guess > number){
            std::cout << " TOO HIGH !!!\n\n";
            tries++;
        }
        else{
            std::cout << "CORRECT !!! YOU DID IN " << tries << " Tries\n";
        }
    }while(guess = number);
   
    return 0;
}