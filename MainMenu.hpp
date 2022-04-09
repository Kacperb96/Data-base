#include "DataBase.hpp"

class MainMenu{
    public:
        MainMenu(DataBase db):db{db}{}
        void run(){}

    private:
        DataBase& db;
        char test;
};