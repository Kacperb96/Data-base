#include "MainMenu.hpp"

int main(){
    DataBase db;

    MainMenu menu(db);
    menu.run();

    return 0;
}