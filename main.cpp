#include <iostream>
#include <fstream>
#include <cstdlib>

void intro();

int main(){
    system("clear");
    char ch;
    intro();

    do{
        std::cout << "\n\n\n\t\t\t\tHOME SCREEN\n\n\n";
        std::cout << "\n\n\t1. Result Calculation System";
        std::cout << "\n\n\t2. Student Database Management System";
        std::cout << "\n\n\t3. Exit";
        std::cout << "\n\n\n\n\n\tPlease Select Your Option (1-3) ";
        std::cin >> ch;

        switch(ch){
            case '1':
                 //shows Result Calculation System
                 break;  
            case '2':
                 //shows Student Database Management System Code
                 break;
            case '3':
                 //user wants to exit the system
                 break;
            default: std::cout<<"\a";
  }
    }while(ch != '3');
    std::cin.get();
    return 0;
}

void intro(){
    std::cout << "\n\n******** WELCOME TO STUDENT DATABASE MANAGEMENT AND RESULT CALCULATION SYSTEM *******\n\n";

}