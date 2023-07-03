//Vardan Keshishyan
//  CS/IS 137
//  Final Project 


#include <string>
#include "VirtualPet.h"
#ifndef WaterPet_h
#define WaterPet_h
class WaterPet:public VirtualPet
{
    
private:
    string waterType;
    
public:
    WaterPet(string, string, double,string );
    virtual void changeMood();
    void setTypeWater(string);
    string getTypeWater()const;
    virtual void printInfo()const; 
    
    
};

#endif 
