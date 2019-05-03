// CS 271
// Program Name: Package.h
// Author: Xiana Lara
// Date: 04/25/19
// Purpose: Package class definition

#ifndef PACKAGE_H
#define PACKAGE_H

#include <iostream>
#include <string>
using namespace std;

class Package //begin class
{
  public:
    
    // constructor
    Package(string sname, string saddress, string scity, string sstate, 
            string szip, string rname, string raddress,string rcity, 
            string rstate, string rzip, double w, double c);
            
    // mutators and accessors
    void setSenderName(string sn);
    string getSenderName();

    void setSenderAddress(string sa);
    string getSenderAddress();

    void setSenderCity(string sc);
    string getSenderCity();

    void setSenderState(string ss);
    string getSenderState();

    void setSenderZIP(string sz);
    string getSenderZIP();

    void setRecipientName(string rn);
    string getRecipientName();

    void setRecipientAddress(string ra);
    string getRecipientAddress();

    void setRecipientCity(string rc);
    string getRecipientCity();

    void setRecipientState(string rs);
    string getRecipientState();

    void setRecipientZIP(string rz);
    string getRecipientZIP();

    void setWeight(double weight);
    double getWeight();

    void setCostPerOunce(double cost);
    double getCostPerOunce();

    double calculateCost();

  private:
    
    // private variables for package
    string senderName;
    string senderAddress;
    string senderCity;
    string senderState;
    string senderZIP;

    string recipientName;
    string recipientAddress;
    string recipientCity; 
    string recipientState;
    string recipientZIP;

    double weight;
    double costPerOunce;

};// end class Package

#endif
