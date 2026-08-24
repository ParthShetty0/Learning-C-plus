#include <iostream>

void checkbalance(double balance);
double depoist(double balance);
double withdraw(double balance);

int main(){

    double balance = 0;
    int choice = 0;



    do{
        std::cout << "*************************\n";
        std::cout << "Welcome To Money Bank !!!\n";
        std::cout << "Enter a option to proceed : \n";
        std::cout << "1.Check Balance\n";
        std::cout << "2.Depoist\n";
        std::cout << "3.Withdraw\n";
        std::cout << "4.Exit\n";
        std::cout << "Enter Option : ";
        std::cin >> choice;        
        std::cout << "*************************\n";
        
        switch(choice){
            case 1:
                checkbalance(balance);
                break;
            case 2:
                balance += depoist(balance);
                checkbalance(balance);
                break;
            case 3:
                balance -= withdraw(balance);
                checkbalance(balance);
                break;
            case 4:
                std::cout << "Thanks for using us, Visit again <3\n";
                break;
            default:
                std::cout << "INVALID OPTION !!!!\n";
                break;
            }
    }while(choice != 4);
    

    return 0;
}
void checkbalance(double balance){
    std::cout << "Your Balance is Rs." << balance << "\n";
}
double depoist(double balance){
    double amount = 0;
    std::cout << "Enter Amount to Depoist :";
    std::cin >> amount;


    if(amount < 0){
        std::cout << "Invalid Amount\n";
        return 0;
    }
    else{
        std::cout << "Amount Successfully Depoisted !!\n";
        balance += amount;
        return balance;
    }
    
}
double withdraw(double balance){
    
    double amount = 0;
    std::cout << "Enter Amount to Withdraw :";
    std::cin >> amount;

    if(amount > balance){
        std::cout << "Insufficient Funds !!!\n";
        return 0;
    }
    else if(amount < 0){
        std::cout << "Invalid Amount\n";
        return 0;
    }
    else{
        std::cout << "Amount Successfully Withdrawed !!\n";
        return amount;
    }

    return 0;
}