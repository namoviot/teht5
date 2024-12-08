#include "classb.h"

ClassB::ClassB()
{

}

void ClassB::setInfo(std::string info){
    ClassB::info = info;
}

std::string ClassB::getInfo(){
    return ClassB::info;
}
