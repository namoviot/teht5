#include <QCoreApplication>
#include <iostream>
#include "stdio.h"
#include "classb.h"
#include "assosiationa.h"
#include "aggregation.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int a1 = 5;
    int b = 10;    int* aosoite = &a1;
    int* bosoite = &b;



    std::cout << "a arvo on: ";
    std::cout << a1<< " ";
    std::cout << "a osoite on: ";
    std::cout << aosoite << "\n";



    std::cout << "a arvo on: ";
    std::cout << b<< " ";
    std::cout << "a osoite on: ";
    std::cout << bosoite << "\n" ;

    int* myPointer =  &a1;


    std::cout << "Pointterin osoittama osoite on ";
    std::cout << myPointer << " ";
    std::cout << "Pointterin osoittama muistipaikan osoite on ";
    std::cout << *myPointer << "\n" << "\n";


    myPointer =  &b;

    std::cout << "Pointterin osoittama osoite on ";
    std::cout << myPointer << " ";
    std::cout << "Pointterin osoittama muistipaikan osoite on ";
    std::cout << *myPointer << "\n";

    int* refA = &a1;

    std::cout << "refA osoittaa osoitteeseen: ";
    std::cout << refA << " ";
    std::cout << "refAn osoittaman muistipaikan arvo on: ";
    std::cout << *refA << "\n";


    refA = &b;

    ClassB objB;
    objB.setInfo("Olion B asettama info");

    AssosiationA objAss(objB);
    objAss.setBinfo("Olion objAss asettama info");

    std::cout<<"Assosiaatio esimerkki:"<<"\n";
    std::cout<<"objB: "<<objB.getInfo()<< "\n";
    std::cout<<"objAss: "<<objAss.getBinfo()<<"\n";


    std::cout<<"Aggregaatio esimerkki:"<<"\n";
    ClassB &refB=objB;
    Aggregation objAggr(refB);
    objAggr.setBinfo("Olion Agr asettama info");
    std::cout<<"objB: "<<objB.getInfo()<<"\n";
    std::cout<<"objAggr "<<objAggr.getBinfo()<<"\n";
    std::cout<<"\n";





    return a.exec();
}
