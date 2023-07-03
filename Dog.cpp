//Vardan Keshishyan
//  CS/IS 137
//  Final Project 

#include <iostream>
#include <string>
#include "Dog.h"

Dog::Dog(string n, string clr, double f, double feeL, double Vfee):DomesticLandPet(n,  clr,  f, feeL, Vfee)
{
    setType();
    name = type;
}

void Dog::setType()
{
    type ="Dog";
    name = type;

}
 void Dog::action()const
{
   if(mood=="content")
   {
       cout <<"Stretch and snore." << endl;

       cout <<"Your dog "<< getName() <<" is sleeping next to you."<<endl;
       
   }
    else if(mood=="hungry")
    {
        cout <<getName()<<" RUFF RUFF!!"<<endl;

        cout <<getName() << " is hungry for some food and treats (table scraps preferred)! "<<endl;
    }
    else if(mood == "sick")
    {
        cout <<"Whine, cry, sad dog eyes"<<endl;
        cout << getName() << " doesn't feel well" << endl;
        cout << "Time to go to the vet!!"<<endl;
    }
    
    else if(mood=="playful")
    {
        cout <<getName()<<" brought you a ball.  Throw it and play fetch!"<<endl;
    }
    else if(mood=="naughty")
        
    {
        cout <<"Chew. Chew. "<< getName()<<" is chewed up a magazine."<<endl;

        cout <<"Time to buy more toys or go to obedience class!"<<endl;
    }
}

void Dog::printInfo()const
{
    VirtualPet::printInfo("print");
    action();
}
