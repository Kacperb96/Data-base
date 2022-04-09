#include "DataBase.hpp"

void DataBase::pressEnter() {
    do{
        std::cout << "Press ENTER to continue..." << std::endl << std::endl;
    }while(std::cin.get() != '\n');
}

void DataBase::addUser(){
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
    pressEnter();
}

void DataBase::printUser(){
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

int DataBase::usersAdded(){
    return howManyUsersAdded;
}