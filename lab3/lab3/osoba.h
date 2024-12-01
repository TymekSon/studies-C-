#pragma once
#include <string>

class Osoba
{
public:
    std::string name[25];
    int age;
private:
    int get_age();
    std::string get_name();
};
