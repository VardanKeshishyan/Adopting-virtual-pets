//Vardan Keshishyan
//  CS/IS 137
//  Final Project 

#include "DomesticLandPet.h"

using namespace std;

DomesticLandPet::DomesticLandPet(string n, string clr, double fee, double feeL, double Vfee) :VirtualPet(n, clr, fee)
{
    feeLicense = feeL;
    feeVet = Vfee;

}

double DomesticLandPet::getVetFee() const
{
    return feeVet;
}


void DomesticLandPet::setMood(string md)
{
    if (md == "content" || md == "hungry" || md == "sick")
    {
        mood = md;
    }
    if (md == "playful" || md == "naughty")
    {
        mood = md;
    }
    else
    {
        mood = "content";
    }
}

double DomesticLandPet::calcAdoptionCost()const
{
    return VirtualPet::getBaseAdoptionFee() + feeVet + feeLicense;
}



double DomesticLandPet::abc() const
{
    return feeLicense;
}

bool DomesticLandPet::setLicenseFee(double feeL)
{
    bool upshot;
    feeL > 0 ? upshot = true : upshot = false;

    if (feeL > 0)
    {
        feeLicense = feeL;
    }

    return upshot;

}

bool DomesticLandPet::setvetFee(double v)
{
    bool upshot;
    feeVet > 0 ? upshot = true : upshot = false;

    if (v > 0)
    {
        feeVet = v;
       
    }
    

    return upshot;


}

void DomesticLandPet::changeMood()
{
    int num = rand() % 5 + 1;

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
    case 4:
        mood = "playful";
        break;
    case 5:
        mood = "naughty";
        break;
    }
}
