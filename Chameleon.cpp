//Vardan Keshishyan
//  CS/IS 137
//  Final Project 

#include "Chameleon.h"
#include <iostream>

Chameleon::Chameleon(string n, string clr, double f, double feeL, double Vfee) :DomesticLandPet(n, clr, f, feeL, Vfee)
{

    setType();
}

void Chameleon::setType()
{
    type = "Chameleon";

}
void Chameleon::action()const
{
    if (mood == "content")
    {
        cout << "Chameleon " << getName() << " is invisible (Where is it)" << endl;

    }
    else if (mood == "hungry")
    {
        cout << getName() << " is hunting flies" << endl;
        cout << "Snack Time!" << endl;
    }
    else if (mood == "sick")
    {
        cout << "It is not feeling good" << endl;
        cout << getName() << " needs a doctor." << endl;
    }

    else if (mood == "playful")
    {
        cout << getName() << " is changing its colors very quickly" << endl;
    }
    else if (mood == "naughty")

    {
        cout << "Shhhhh "<< endl;
        cout << getName() << " is sleeping (be quiet)" << endl;
    }

}

void Chameleon::printInfo()const
{
    VirtualPet::printInfo("print");
    action();
}
