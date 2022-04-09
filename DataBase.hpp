#pragma once
#include <iostream>
#include <array>
#include <exception>
#include <stdio.h>
#include <stdlib.h>
#include "IDataBase.hpp"
#include "User.hpp"

class DataBase : public IDataBase{
    public:
        void pressEnter() override{}
        void addUser() override{}
        void printUser() override{}
        
        int usersAdded();
        ~DataBase() = default;
        std::array<User, 100> users;
    
    private:
        int howManyUsersAdded{0};
};