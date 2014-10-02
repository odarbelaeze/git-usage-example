#include "Student.h"

Student::Student()
{

}


Student::~Student()
{

}


std::string Student::getName() const
{
    return this -> name;
}


void Student::setName(std::string name)
{
    this -> name = name;
}


std::string Student::getId() const
{
    return this -> id;
}


void Student::setId(std::string id)
{
    this -> id = id;
}
