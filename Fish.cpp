//Vardan Keshishyan
//  CS/IS 137
//  Final Project 

#include <stdio.h>
#include "Fish.h"
#include <iostream>


Fish::Fish(string n, string c, double f, string ty):WaterPet(n,  c,  f, ty)
{
            
    setType();
    name = ty;

}

void Fish::setType()
{
    type = "Fish";
    name = type;

}
 void Fish::action()const
{
   if(mood=="content")
   {
       cout <<"Swish swish.";
       cout <<"Your fish "<<getName()<<" is casually swimming"<<endl;
       
   }
    else if(mood=="hungry")
    {
        cout <<getName()<<" SWISH SWISH SWISH"<<endl;
        cout <<"Your fish "<<getName() << "is swimming to the top of the tank looking for food!"<<endl;
    }
    else if(mood == "sick")
    {
        cout <<getName()<<" is hiding behind a rock and doesn't feel well."<<endl;
        cout << getName() <<"Time to call the vet!"<<endl;
    }
    
}

void Fish::printInfo()const
{
    VirtualPet::printInfo("print");
    action();
}
