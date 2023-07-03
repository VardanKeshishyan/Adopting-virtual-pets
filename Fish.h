//Vardan Keshishyan
//  CS/IS 137
//  Final Project 


#include "WaterPet.h"

#ifndef Fish_h
#define Fish_h

#include <string>

class Fish:public WaterPet
{
private:
    string name;
public:
    
    Fish(string, string, double=25, string = "fresh");
    virtual void action()const;
    virtual void printInfo()const;
    virtual void setType();

};

#endif
