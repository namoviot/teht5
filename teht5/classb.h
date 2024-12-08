#ifndef CLASSB_H
#define CLASSB_H
#include <iostream>

class ClassB
{
public:
    ClassB();
    std::string getInfo();
    void setInfo(std::string info);

private:
    std::string info;
};

#endif // CLASSB_H
