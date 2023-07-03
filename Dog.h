//Vardan Keshishyan
//  CS/IS 137
//  Final Project 


#ifndef Dog_h
#define Dog_h

#include "DomesticLandPet.h"

class Dog:public DomesticLandPet
{
private:
    string name;
public:
    Dog(string, string, double=25, double=80, double=10);

    virtual void action() const;
    virtual void printInfo() const;
    virtual void setType();

    
};
#endif 
