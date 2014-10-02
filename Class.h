#ifndef CLASS_H_
#define CLASS_H_

#include <string>

class Class
{
public:
    Class();
    Class(std::string);
    ~Class();

    std::string getName() const;
    void setName(std::string);

private:
    std::string name;

};

#endif