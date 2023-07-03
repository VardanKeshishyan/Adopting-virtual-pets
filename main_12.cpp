//Vardan Keshishyan
//  CS/IS 137
//  Final Project 

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "Fish.h"
#include "Hamster.h"
#include "Chameleon.h"
#include "VirtualPet.h"
#include "DomesticLandPet.h"
#include "WaterPet.h"
#include "Cat.h"
#include "Dog.h"




int main()
{
    ifstream fileName;
    const int S = 10;
    string file = "PetNames.txt";
    string Type;
    string copy = "type";
    string patName;
    string patColor;
    fileName.open(file.c_str());
    vector<VirtualPet*> petArr;
    VirtualPet* petArrs[S];
    char selection = 'n';


    while (selection != 'Q' && selection != 'q') {
        selection = '0';
        cout << endl << endl << endl;
        petArrs[S - 4]->printMain();
        cin >> selection;
        switch (selection)
        {
        case '1':
            Type = "Dog";
            petArrs[2]->printChose(Type, patName, patColor);
            {Dog* dog = new Dog(patName, patColor);
            petArr.push_back(dog); }
            break;
        case '2':
            Type = "Cat";
            petArrs[1]->printChose(Type, patName, patColor);
            {Cat* cat = new Cat(patName, patColor);
            petArr.push_back(cat); }
            break;
        case '3':
            Type = "Fish";
            petArrs[3]->printChose(Type, patName, patColor);
            {Fish* fish = new Fish(patName, patColor);
            petArr.push_back(fish); }
            break;
        case '4':
            Type = "Hamster";
            petArrs[4]->printChose(Type, patName, patColor);
            {Hamster* hamster = new Hamster(patName, patColor);
            petArr.push_back(hamster); }
            break;
        case '5':
            Type = "Parrot";
            petArrs[5]->printChose(Type, patName, patColor);
            {Chameleon* chameleon = new Chameleon(patName, patColor);
            petArr.push_back(chameleon); }
            break;
        case 'q':
            break;
        case 'Q':
            break;
        default:
            cout << "\nInvalid choice, please try again" << endl; //exception handling
        }

    }



    if (!petArr.empty()) {
        petArr.at(0)->printInfo("clean");
    }
    else {

        cout << "Program didn't get any input (So it ends)"; //exception handling
        return 0;
    }

    for (int i = 0; i < petArr.size(); ++i)
    {
        petArr.at(i)->printInfo("fill");

    }

    selection = 'n';

    // string copy2;

    while (selection != 'Q' && selection != 'q') {
        selection = 'n';
        cout << endl << endl;
        cout << "PET PROCESSING MENU" << endl;
        cout << "1. Print all Pet info" << endl;
        cout << "2. Print PetNames.txt" << endl;
        cout << "Q. Quit" << endl;
        cout << "Make A Selection: ";
        //cout << "**************" << VirtualList.size() << endl;
        cin >> selection;

        switch (selection)
        {
        case '1':
            for (int i = 0; i < petArr.size(); i++)
            {
                petArr.at(i)->changeMood();
                petArr.at(i)->printInfo("print");
            }
            break;
        case '2':
            cout << endl;
            cout << "\nPETS: " << endl;
            cout << "_________________" << endl;
            while (getline(fileName, copy)) {
                cout << copy << endl;
                cout << endl;
            }
            break;
        default:
            cout << "\nInvalid choice, please try again" << endl; //exception handling

        }

    }

    fileName.close();

    return 0;
}
