#include "MainMenu.hpp"

void MainMenu::run(){
    do{
        std::cout << "----MAIN MENU----" << std::endl;
        std::cout << "1. Add user" << std::endl;
        std::cout << "2. Print user" << std::endl;
        //std::cout << "Users in data basse: " << d1.usersAdded() << std::endl;

        test = std::cin.get();
        
        switch (test)
        {
        case '1':
            db.addUser();          
            break;
        
        case '2':
            try{
                db.printUser();
            }catch(std::invalid_argument& e){
                std::cerr << e.what() << std::endl;
            }

            break;
        }

        db.pressEnter();
        system("clear");
    }while(test != 27);
}