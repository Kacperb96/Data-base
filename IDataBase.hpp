#pragma once
#include <iostream>

class IDataBase{
    public:
        virtual void pressEnter() = 0;
        virtual void addUser() = 0;
        virtual void printUser() = 0;
};