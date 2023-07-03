//Vardan Keshishyan
//  CS/IS 137
//  Final Project 

#ifndef DomesticLandPet_h
#define DomesticLandPet_h
#include "VirtualPet.h"


class DomesticLandPet: public VirtualPet
{
private:
    double feeVet;
    double feeLicense;
    
public:

    DomesticLandPet(string, string, double = 25, double = 80, double = 10);
    double abc() const;
    double getVetFee() const;
    virtual void setMood(string);
    bool setvetFee(double);
    virtual double calcAdoptionCost()const;
    bool setLicenseFee(double);
    virtual void changeMood();
    
};
#endif 
