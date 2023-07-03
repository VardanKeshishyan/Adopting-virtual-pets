//Vardan Keshishyan
//  CS/IS 137
//  Exam 2



#ifndef VirtualPet_h
#define VirtualPet_h

#include <string>
using namespace std;

class VirtualPet
{
    private:
        string name;  //name of the pet
        string color;  //color of the pet
        double baseAdoptionFee;  //base adoption fee for all pet types, default value $25
        
    protected:
        string mood;  //mood of the pet - protected makes it easier to program changeMood
        string type;  //represents the type of Pet for example:  "Dog", "Cat" etc.
        virtual void setType() = 0;  //a virtualPet has a type empty string (see the constructor) but we want to force derived classes to specify a pet type other than empty string.  The function has no arguments because we don't want the user to pass in the type we want the class to choose, so class Cat for example should override setType and inside just say type = "Cat"
    public:
        VirtualPet(string, string, double = 0);//pass in name, color, base adoptionFee
        void setName(string);
        string getName()const;
        void printMain(); // I just did  this small change to print menu
        string getType()const;
        void setColor(string);
        string getColor()const;
        string getMood()const;
        virtual void setMood(string);
        double getBaseAdoptionFee()const;
        void setBaseAdoptionFee(double = 25.0);
        virtual double calcAdoptionCost()const;
        void printChose(string&,string&,string&);// I just made this small change that will work with the menu and make my program easier to read. (instead of putting all in the main)
        virtual void printInfo(string)const;  //print's info abou the pet, note the const
        virtual void changeMood();  //randomly changes the pet's mood
        virtual void action()const = 0;  //this funciton will print (cout) a pet action (like meow) related to a mood, Example let's say the cat's mood is happy the function might cout << "Meow",note the const
};


#endif 
