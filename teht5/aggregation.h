#ifndef AGGREGATION_H
#define AGGREGATION_H
#include "classb.h"
#include <iostream>

class Aggregation
{
private:
    ClassB &refB;
public:
    Aggregation(ClassB&);
    std::string getBinfo();
    void setBinfo(std::string);
};

#endif // AGGREGATION_H
