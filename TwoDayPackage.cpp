// CS 271
// Program Name: TwoDayPackage.cpp
// Author: Xiana Lara
// Date: 04/25/19
// Purpose: TwoDayPackage class member function definitions

#include <iostream>
#include "TwoDayPackage.h"

using namespace std;

// from package
TwoDayPackage::TwoDayPackage(string sname, string saddress, string scity, string sstate, 
            string szip, string rname, string raddress, string rcity, 
            string rstate, string rzip, double w, double c, double f)
    : Package(sname, saddress, scity, sstate, 
            szip, rname, raddress, rcity, 
            rstate, rzip, w, c){
            
    setFlatFee(delivery_fee);
    
}

// accessors and mutators
double TwoDayPackage::getFlatFee(){

    return flatFee;

}
void TwoDayPackage::setFlatFee(double f){

    //check that delivery_fee is greater than or equal to 0
    if (f >= 0)
        flatFee = f;
    else{
        throw std::invalid_argument("delivery fee cannot be negative"); 
    }

}

// cost calculation
double TwoDayPackage::calculateCost(){

    double result;
    result = Package::calculateCost() + getFlatFee();
    return result;

}
