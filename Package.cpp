// CS 271
// Program Name: Package.cpp
// Author: Xiana Lara
// Date: 04/25/19
// Purpose: Package class member function definitions

#include <iostream>
#include <string>
#include "Package.h"
using namespace std;

Package::Package(string sname, string saddress, string scity, string sstate, 
            string szip, string rname, string raddress,string rcity, 
            string rstate, string rzip, double w, double c){
    
    //Mutators
    setSenderName(sname);
    setSenderAddress(saddress);
    setSenderCity(scity);
    setSenderState(sstate);
    setSenderZIP(szip);

    setRecipientName(rname);
    setRecipientAddress(raddress);
    setRecipientCity(rcity);
    setRecipientState(rstate);
    setRecipientZIP(rzip);

    setWeight(w);
    setCostPerOunce(c);
    
} // constructor

// Mutator and Accessor functions

void Package::setSenderName(string sn){
    
    senderName = sn;
    
}
string Package::getSenderName(){
    
    return senderName;
    
}

void Package::setSenderAddress(string sa){
    
    senderAddress = sa;

}
string Package::getSenderAddress(){
    
    return senderAddress;

}

void Package::setSenderCity(string sc){
    
    senderCity = sc;

}

string Package::getSenderCity(){
    
    return senderCity;

}

void Package::setSenderState(string ss){
    
    senderState = ss;

}
string Package::getSenderState(){

    return senderState;

}

void Package::setSenderZIP(string sz){
    
    senderZIP = sz;

}
string Package::getSenderZIP(){
    
    return senderZIP;

}

void Package::setRecipientName(string rn){
    
    recipientName = rn;

}
string Package::getRecipientName(){
    
    return recipientName;
    
}

void Package::setRecipientAddress(string ra){
    
    recipientAddress = ra;
    
}
string Package::getRecipientAddress(){
    
    return recipientAddress;
    
}

void Package::setRecipientCity(string rc){
    
    recipientCity = rc;
    
}
string Package::getRecipientCity(){
    
    return recipientCity;
    
}

void Package::setRecipientState(string rs){
    
    recipientState = rs;

}
string Package::getRecipientState(){
    
    return recipientState;

}

void Package::setRecipientZIP(string rz){
    
    recipientZIP = rz;

}
string Package::getRecipientZIP(){
    
    return recipientZIP;

}

//weight set to zero if negative
void Package::setWeight(double w){

    //check for positive weight and cost
    if (w > 0.0){
        
        weight = w;
    
    } // of if 
    else {
        
        throw std::invalid_argument("weight must be more than zero"); 
    
    } // of else 

}
double Package::getWeight(){

    return weight;

}

//cost set to zero if negative
void Package::setCostPerOunce(double c){

    //check for positive weight and cost
    if (c > 0.0){
        
        costPerOunce = c;
    
    } // of if 
    else {
        
        throw std::invalid_argument("cost must be more than zero"); 
    
    } // of else 
}

double Package::getCostPerOunce(){
    
    return costPerOunce;
    
} // of getCostPerOunce

double Package::calculateCost(){
    
    double result;

    result = weight * costPerOunce;

    return result;
    
} // of calculateCost
