/* 
 * File:   main.cpp
 * Author: Luis Gutierrez 
 * Created on September 6, 2016, 11:34 AM
 * Purpose: Calculate cost of stock
 */

//Include system level libraries
#include <iostream> //Input?output libraries
using namespace std; //Libraries compiled under standard namespace

//User Libraries

//Global Constants
const char PERCENT=100;

//Functional Prototypes

//Program execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    unsigned short nShares=750; //number of shares
    float ppShare=3.5e1f; //Price per share $'s
    unsigned char comish=2; //Commission percentage
    float pricePd, comPd, totPd; // Price, Commission, Total Paid $'s
    
    //Calculate the amounts paid in $'s
    pricePd = nShares*ppShare;
    comPd = pricePd*comish/ PERCENT;
    totPd = pricePd+comPd;
    
    //output the results
    cout<<"Price of Stock Purchase Problem"<<endl;
    cout<<"Number of shares purchased = "<<nShares <<endl;
    cout<<"Price Per Share            = $"<<ppShare<<endl;
    cout<<"Commission = "<<static_cast<int>(comish)<<"%"<<endl;
    cout<<"Price paid for the shares  = $"<<pricePd<<endl;
    cout<<"Price paid in commission   = $"<<comPd<<endl;
    cout<<"Total Paid                 = $"<<totPd<<endl;
    return 0;
}