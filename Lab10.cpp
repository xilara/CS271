// CS 271
// Program Name: Lab10.cpp
// Author: Xiana Lara
// Date: 04/25/19
// Purpose: test cases for Package and TwoDayPackages

#include <iostream>
#include <iomanip>
#include "Package.h"
#include "TwoDayPackage.h"

using namespace std;

int main()
{
    //Package Test
    Package p1("First Name", "1111 Street St", "Las Cruces",
                        "NM", "88011", "F. Last", "2222 Avenue Ave", "Las Cruces", "NM",
                        "88001", 9.00, 1.00); 
    
    // print with 2 decimal places
    cout << fixed << setprecision(2); 
    
    // Sender info
    cout << endl;
    cout << "Package Test\n" << endl;
    cout << "Sender: \n" << right << p1.getSenderName() << endl;
    cout << p1.getSenderAddress() << endl;
    cout << p1.getSenderCity() << " " << p1.getSenderState() << " " << p1.getSenderZIP() << endl;
    cout << "\n";
    
    // Recipient info
    cout << "Recipient: \n" << p1.getRecipientName() << endl;
    cout << p1.getRecipientAddress() << endl;
    cout << p1.getRecipientCity() << " " << p1.getRecipientState() << " " << p1.getRecipientZIP() << endl;
    cout << "Shipping Cost $ " << p1.calculateCost() << endl;

    //TwoDayPackage Test
    TwoDayPackage tdp2("Second Test", "1234 Avenue Ave.", "Las Cruces",
                        "NM", "88011", "Recipient Name", "5678 Street st", "Las Cruces", "NM",
                        "88001", 15.50, 1.99, 1.03); 
    
    // print with 2 decimal places
    cout << fixed << setprecision(2); 
    
    // Sender info
    cout << "\n2 Day Test\n" << endl;
    cout << "Sender: \n" << tdp2.getSenderName() << endl;
    cout << tdp2.getSenderAddress() << endl;
    cout << tdp2.getSenderCity() << " " << tdp2.getSenderState() << " " << tdp2.getSenderZIP() << endl;
    cout << endl;
    
    // Recipient info
    cout << "Recipient: \n" << tdp2.getRecipientName() << endl;
    cout << tdp2.getRecipientAddress() << endl;
    cout << tdp2.getRecipientCity() << " " << tdp2.getRecipientState() << " " << tdp2.getRecipientZIP() << endl;
    cout << "Shipping Cost $ " << tdp2.calculateCost() << endl;
    cout << endl;


    // TwoDayPackage Test Invalid Exception with negative cost
    cout << "Invalid Argument Test: " << endl;

    TwoDayPackage tdp3("NM SU", "1111 University Ave.", "Las Cruces",
                        "NM", "88001", "Student Whatever", "2222 Street St", "San Digeo", "CA",
                        "92111", -2.50, 0.25, 5.11); 

} // of main 

