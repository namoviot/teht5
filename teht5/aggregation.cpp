#include "aggregation.h"
#include <iostream>



Aggregation::Aggregation(ClassB &value):refB(value)
{
}

std::string Aggregation::getBinfo()
{
    return refB.getInfo();
}

void Aggregation::setBinfo(std::string value)
{
    refB.setInfo(value);
}
