//Vardan Keshishyan
//  CS/IS 137
//  Final Project 


#ifndef Chameleon_h
#define Chameleon_h

#include "DomesticLandPet.h"

class Chameleon:public DomesticLandPet
{
private:
    string name;
public:
    Chameleon(string, string, double=25, double=100, double=20);
    virtual void setType();
    virtual void action()const;
    virtual void printInfo()const;
};


#endif 
