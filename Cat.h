//Vardan Keshishyan
//  CS/IS 137
//  Final Project 


#ifndef Cat_h
#define Cat_h

#include "DomesticLandPet.h"

class Cat:public DomesticLandPet
{
private:
    string name;
    
public:
    Cat(string, string, double=25, double=80, double=10);
    virtual void action() const;
    virtual void printInfo() const;
    virtual void setType();
};
#endif 
