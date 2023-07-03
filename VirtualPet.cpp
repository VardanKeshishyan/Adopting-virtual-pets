//Vardan Keshishyan
//  CS/IS 137
//  Final Project 



#include "VirtualPet.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

VirtualPet::VirtualPet(string nme, string clr, double fee)
{
    srand((unsigned int)time(NULL));
    type = "";
    setName(nme);
    setColor(clr);
    setMood("content");  
    setBaseAdoptionFee(fee);
}

void VirtualPet::setName(string nm)
{
    name = nm;
}

string VirtualPet::getName()const
{
    return name;
}

string VirtualPet::getType() const
{
    return type;
}

void VirtualPet::setColor(string clr)
{
    color = clr;
}

string VirtualPet::getColor()const
{
    return color;
}

string VirtualPet::getMood()const
{
    return mood;
}

//NOTE:  There are better ways to write this function but to keep it simple for the  test
//I did it this way, you won't be able to re-use this much when you override it in  the derived classes.
void VirtualPet::setMood(string md)
{
    if(md == "content" || md == "hungry" || md == "sick")
    {
        mood = md;
    }
    else
    {
        mood = "content";
    }
}


void VirtualPet::setBaseAdoptionFee(double fee)
{
    if(fee > 0)
    {
        //double base = getBaseAdoptionFee();
        baseAdoptionFee = fee;
    }
    else
    {
        baseAdoptionFee = 25.0;
    }
}

double VirtualPet::getBaseAdoptionFee()const
{
    return baseAdoptionFee;
}

double VirtualPet::calcAdoptionCost()const
{
    return baseAdoptionFee;
}

//to randomly change the virtual pet's mood
void VirtualPet::changeMood()
{
    int num = rand() % 5 + 1;
    
    switch(num)
    {
        case 1:
            mood = "content";
            break;
        case 2:
            mood = "hungry";
            break;
        case 3:
            mood = "sick";
        case 4:
            mood = "playful"; //added
            break;
        case 5:
            mood = "naughty";//added
            break;
    }
}


void VirtualPet::printMain() { // I just made this small change to the print the menu (instead of putting it all in the main which is not follow to OOP rules)
    cout << "ADOPTING  PET(s)" << endl;
    cout << "1. You can adopt a  Dog" << endl;
    cout << "2. You can adopt a  Cat" << endl;
    cout << "3. You can adopt a  Fish" << endl;
    cout << "4. You can adopt a  Rabbit" << endl;
    cout << "5. You can adopt a  Parrot" << endl;
    cout << "Q. Adopting pets is complete" << endl;
    cout << "Make A Selection: ";
}


void VirtualPet::printInfo(string choose)const
{


   ofstream fileName;

    if (choose == "fill") {  //I added this small change to work with the txt files 
            fileName.open("PetNames.txt", ios::app);
            fileName << "PET's type:  " << getType() << endl;
            fileName << "PET's name:  " << getName() << endl;
            fileName.close();
    }


    if (choose == "clean") { //I added this small change to work with the txt files 
        fileName.open("PetNames.txt");

        fileName << "" << endl;

        fileName.close();

    }

    if (choose == "print") {
        cout << "\n\nVIRTUAL PET INFO" << endl;
        cout << "---------------------" << endl;
        cout << "Adoption Cost: " << calcAdoptionCost() << endl;
        cout << "Name:          " << getName() << endl;
        cout << "Type:          " << getType() << endl;
        cout << "Color:         " << getColor() << endl;
        cout << "Mood:          " << getMood() << endl;
        cout << "Action:" << " ";
        action();
        
    }

}

void VirtualPet::printChose(string& t, string& n, string& c) { // I just made this small change that will work with the menu and make my program easier to read. (instead of putting all in the main)
    string a;
    cout << "What is " << t <<"'s name? ";
    cin >> n;
    cout << "What color is the " << t << "? ";
    cin >> c;
    if (t == "Fish") {
        cout << "Water Type ( fresh or salt )" << endl;
        cin >> a;
    }

}
