//Vardan Keshishyan
//  CS/IS 137
//  Final Project 

#include "Hamster.h"
#include <iostream>

Hamster::Hamster(string n, string clr, double f, double feeL, double Vfee) :DomesticLandPet(n, clr, f, feeL, Vfee)
{
    setType();

}

void Hamster::setType()
{
    type = "Hamster";

}
void Hamster::action()const
{
    if (mood == "content")
    {
        cout << "Your Hamster " << getName() << " is looking from the window to the cars" << endl;

    }
    else if (mood == "hungry")
    {
        cout << getName() << " is trying to chatch a cockroach" << endl;
        cout << "Time to eat some pellets" << endl;
    }
    else if (mood == "sick")
    {
        cout << "Quiet" << endl;
        cout << getName() << " doesn't feel good and stops mumbling\n Time to go to the vet!!" << endl;
    }

    else if (mood == "playful")
    {
        cout << getName() << " runs the exercise wheel at high speed " << endl;
    }
    else if (mood == "naughty")

    {
        cout << "Today is long day. " << getName() << " wants to go to bed" << endl;
    }
}

void Hamster::printInfo()const
{
    VirtualPet::printInfo("print");
    action();
}
