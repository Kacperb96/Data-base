#include <iostream>
#include <array>

static short howManyUsersAdded{0};

struct User{
    std::string name;
    std::string surname;
    short age{};
    std::string phone_number;
};

std::array<User, 100> users;