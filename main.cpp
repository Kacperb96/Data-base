#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <array>
#include <exception>
#include "User.hpp"

void pressEnter();

void addUser(){

    std::string name;
    std::string surname;
    short age;
    std::string phone_num;

    std::cout << "Type name: ";
    std::cin >> users[howManyUsersAdded].name;

    std::cout << "Type second name: ";
    std::cin >> users[howManyUsersAdded].surname;

    std::cout << "Type age: ";
    std::cin >> users[howManyUsersAdded].age;

    std::cout << "Type phone number: ";
    std::cin >> users[howManyUsersAdded].phone_number;

    howManyUsersAdded++;
}

void printUser(){
    if(howManyUsersAdded < 0){
        throw std::invalid_argument("Data base is empty\n\n");
        exit(0);
    }
    else{
        for(auto i = 0; i < howManyUsersAdded; i++){
            std::cout << "User nr: " << i + 1 << std::endl;
            std::cout << "Name: " << users[i].name << std::endl;
            std::cout << "Surname: " << users[i].surname << std::endl;
            std::cout << "Age: " << users[i].age << std::endl;
            std::cout << "Phone number: " << users[i].phone_number << std::endl;
            
        }
        pressEnter();
    }
}

void pressEnter(){
    do{
        std::cout << "Press ENTER to continue..." << std::endl << std::endl;
    }while(std::cin.get() != '\n');
}

int main(){
    char test;

    do{
        std::cout << "----MAIN MENU----" << std::endl;
        std::cout << "1. Add user" << std::endl;
        std::cout << "2. Print user" << std::endl;
        std::cout << "Users in data basse: " << howManyUsersAdded << std::endl;

        test = std::cin.get();
        
        switch (test)
        {
        case '1':
            addUser();            
            break;
        
        case '2':
            try{
                printUser();
            }catch(std::invalid_argument& e){
                std::cerr << e.what() << std::endl;
            }

            break;
        }

        pressEnter();
        system("clear");
    }while(test != 27);

    return 0;
}