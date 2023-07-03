//Vardan Keshishyan
//  CS/IS 137
//  Final Project 

#ifndef Hamster_h
#define Hamster_h
#include "DomesticLandPet.h"

class Hamster:public DomesticLandPet
{
    
public:
    Hamster(string, string, double=25, double=50, double=5);
    virtual void setType();
    virtual void action()const;
    virtual void printInfo()const;
};
#endif 
