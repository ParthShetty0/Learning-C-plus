#include <iostream>

int main(){

    std::string questions[5] = {"1.Which data structure operates on a Last-In, First-Out (LIFO) principle?",
                                "2.What is the average time complexity of searching \n for an element in a balanced Binary Search Tree (BST)?",
                                "3.Which core principle of Object-Oriented Programming (OOP)\n refers to hiding internal implementation details and exposing only necessary interfaces?",
                                "4.Which of the following programming languages\n is dynamically and weakly (or loosely) typed?",
                                "5.What does HTTP stand for in\n web development and networking?"};
    
    std::string options[][4]= {{"A) Queue","B) Stack","C) Array","D) Linked List"},
                                {"A) O(1)","B) O(n)","C) O(log n)","D) O(n log n)"},
                                {"A) Encapsulation","B) Inheritance","C) Polymorphism","D) Recursion"},
                                {"A) Rust","B) Java","C) JavaScript","D) C++"},
                                {"A) HyperText Transfer Protocol","B) High Transfer Text Program","C) Hyperlink Tool and Transmission Process","D) Host Terminal Traffic Protocol"}};
    
    char answerkey[5] = {'B','C','A','C','A'};
    int size = sizeof(questions)/sizeof(questions[0]);
    int score = 0;
    char guess;

    for(int i = 0; i < size ; i++ ){
        std::cout << "**************************\n";
        std::cout << questions[i] << "\n";
        std::cout << "**************************\n";
        for(int j = 0; j < sizeof(options[0]) / sizeof(options[0][0]); j++){
            std::cout << options[i][j] << "\n";
        }
        std :: cout << "Enter your answer :";
        std :: cin >> guess;
        guess = toupper(guess);

        if(guess == answerkey[i]){
            std::cout << "Correct Answer !!!\n";
            score++;
        }
        else{
            std::cout << "INCORRECT ANSWER !!!\n";
            std::cout << "The correct answer is " << answerkey[i] << "\n";
        }
    }
    std::cout << "**************************\n";
    std::cout << "Your score is " << (score/double(size))*100 << "%\n";
    std::cout << "**************************\n";
    
    return 0;
}