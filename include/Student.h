#ifndef STUDENT_H_
#define STUDENT_H_

#include <string>

class Student
{
public:
    Student();
    ~Student();

    std::string getName() const;
    void setName(std::string);
    std::string getId() const;
    void setId(std::string);

private:
    std::string name;
    std::string id;

};

#endif