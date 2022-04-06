#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <memory>
#include <array>

struct User{
    std::string name;
    std::string surname;
    short age{};
    std::string phone_number;
};

short howManyUsersAdded{0};
std::array<User, 100> users;

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

void pressEnter(){
    char temp = 'x';
    std::cout << "Press ENTER to continue..." << std::endl;
    while (temp != '\n')
        std::cin.get(temp);
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

            break;
        }

        pressEnter();
        system("clear");
    }while(test != 27);

    return 0;
}