//Vardan Keshishyan
//  CS/IS 137
//  Final Project 


#include "Cat.h"
#include <iostream>


Cat::Cat(string n, string clr, double f, double feeL, double Vfee) :DomesticLandPet(n, clr, f, feeL, Vfee)
{
    setType();
        
}


void Cat::setType()
{
    type ="Cat";
    name = type;
    
}
 void Cat::action()const
{
   if(mood=="content")
   {
       cout <<" Purr, purr." << endl;

       cout <<" Your cat "<< getName()<< " is cuddling in your lap. "<<endl;
       
   }
    else if(mood=="hungry")
    {
        cout <<"MEOW. MEOW."<<endl;

        cout <<"Your cat"<< getName() <<" is hungry for some water and fish. "<<endl;
    }
        
    else if(mood=="sick")
    {
        cout << getName()<< " is quiet and hiding and doesn't feel well"<<endl;
        cout << " Time to go to vet!!"<<endl;
    }
    else if(mood == "playful")
    {
        cout << getName() <<" is playing with a toy mouse. Meow"<<endl;
    }
    else if(mood=="naughty")
        
    {
        cout << "Scratch. Scracth. "<< getName()<< " is scratching the curtains."<<endl;

        cout <<"Time to buy another scractching post or trim nails !"<<endl;
    }
}

void Cat::printInfo()const
{
    VirtualPet::printInfo("print");
    action();
}
