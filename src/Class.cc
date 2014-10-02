#include "Class.h"

Class::Class()
 : name("Default class name")
{
}


Class::Class(std::string _name)
 : name(_name)
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
