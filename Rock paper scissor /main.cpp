#include <iostream>
#include <ctime>

char userchoice();
char getcomputerchoice();
int gamearchi(char choice, char computerchoice);

int main(){
    char choice;
    char computerchoice;

    choice = userchoice();
    switch(choice){
        case 'R':
        std::cout << "Your choice is Rock\n";
        break;
        case 'P':
        std::cout << "Your choice is Paper\n";
        break;
        case 'S':
        std::cout << "Your choice is Scissor\n";
        break;
    }

    computerchoice = getcomputerchoice();
    gamearchi(choice, computerchoice);
    return 0;
}
char userchoice(){
    char player;
    do{
        std::cout << "********************\n";
        std::cout << "||| Rock Paper Scissor Game |||\n";
        std::cout << "R for Rock\n";
        std::cout << "P for Paper\n";
        std::cout << "S for Scisor\n";
        std::cout << "Choose your Option(R,P,S):";
        std::cin >> player;
        if(player !='R' && player !='P' && player !='S'){
            std::cout << "Invalid Input\n";
            exit(0);
        }
    return player;
    }while(player !='R' && player !='P' && player !='S');

}

char getcomputerchoice(){
    srand(time(0));
    int choice = (rand() % 3) + 1;
    switch(choice){
        case 1: 
        std::cout << "Computer choose Rock\n";
        return 'R';
        case 2: 
        std::cout << "Computer choose paper\n";
        return 'P';
        case 3:
        std::cout << "Computer choose Scissor\n";
        return 'S';
    }
}
int gamearchi(char choice, char computerchoice){

    switch(computerchoice){
        case 'R' : 
            if(choice == 'R'){
            std::cout << "It's A tie\n";
            }
            else if(choice == 'P'){
            std::cout << "You Won !!\n";
            }
            else{
            std::cout << "You Lost !!\n";
            }
            break;

        case 'P' : 
            if(choice == 'R'){
                std::cout << "You Lost!!\n";
            }
            else if(choice == 'P'){
                std::cout << "It's a Tie\n";
            }
            else{
                std::cout << "You Won !!\n";
            }
        break;

        case 'S' : 
            if(choice == 'R'){
                std::cout << "You Won!!\n";
            }
            else if(choice == 'P'){
                std::cout << "You Lost !!\n";
            }
            else{
                std::cout << "It's a Tie\n";
            }
        break;
        }
    return 0;
}