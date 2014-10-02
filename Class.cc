#include "Class.h"

Class::Class()
{

}


Class::~Class()
{

}


std::string Class::getName() const
{
    return this -> name;
}


void Class::setName(std::string name)
{
    this -> name = name;
}
