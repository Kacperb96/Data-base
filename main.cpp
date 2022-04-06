#include <iostream>
#include "DataBase.hpp"

int main(){
    DataBase d1;

    char test;

    do{
        std::cout << "----MAIN MENU----" << std::endl;
        std::cout << "1. Add user" << std::endl;
        std::cout << "2. Print user" << std::endl;
        //std::cout << "Users in data basse: " << d1.usersAdded() << std::endl;

        test = std::cin.get();
        
        switch (test)
        {
        case '1':
            d1.addUser();          
            break;
        
        case '2':
            try{
                d1.printUser();
            }catch(std::invalid_argument& e){
                std::cerr << e.what() << std::endl;
            }

            break;
        }

        d1.pressEnter();
        //system("clear");
    }while(test != 27);

    return 0;
}