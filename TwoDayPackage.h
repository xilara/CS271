// CS 271
// Program Name: TwoDayPackage.h
// Author: Xiana Lara
// Date: 04/25/19
// Purpose: TwoDayPackage class definition

#include <iostream>
#include <string>
using namespace std;

#include "Package.h"


class TwoDayPackage : public Package{

  private:
    
    double flatFee;
    
  public:
  
    // constructor
    TwoDayPackage(string sname, string saddress, string scity, string sstate, 
            string szip, string rname, string raddress,string rcity, 
            string rstate, string rzip, double w, double c, double f);

    // accessor and mutator
    double getFlatFee();
    void setFlatFee(double f);
    
    // cost calculation
    double calculateCost();

}; // of TwoDayPackage
