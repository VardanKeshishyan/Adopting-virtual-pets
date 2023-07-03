//Vardan Keshishyan
//  CS/IS 137
//  Final Project 

#include <iostream>
#include "WaterPet.h"

WaterPet::WaterPet(string n, string c, double f, string t):VirtualPet(n,  c,  f)
{
  
    waterType = t;
}


void WaterPet::changeMood()
{
    int num = rand() % 3 + 1;

    switch (num)
    {
    case 1:
        mood = "content";
        break;
    case 2:
        mood = "hungry";
        break;
    case 3:
        mood = "sick";
        break;

    }
}


void WaterPet::setTypeWater(string t)
{
    if(t == "fresh" || t == "salt")
    {
        waterType=t;
    }
    else
    {
        waterType="fresh";
    }
}
    
string WaterPet::getTypeWater() const
{
    return waterType;
}


void WaterPet::printInfo()const
{
    VirtualPet::printInfo("print");
    cout <<"Water Type"<< waterType << endl;
}
