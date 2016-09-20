/* 
 * File:   main.cpp
 * Author: Luis Gutierrez
 * Created on September 20, 2016, 10:10AM
 * Purpose: Calculate monthly payment
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>    //Format
#include <cmath>      //Math Library for Power function
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const int PERCENT=100;//Percentage conversion
const int MONTHS=12;  //Months in a year
//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    char nCmPrds=36;   //Number of monthly compounding periods
    float intRate=12;  //Percentage per year
    float loanAmt=1e4f;//$10,000 Loan
    float monPay;      //Monthly Payment $'s
    float totPaid;     //Total Amount paid $'s
    float intPaid;     //Total Interest paid $'s
    
    //Input values
    
    //Process values -> Map inputs to Outputs
    intRate/=(PERCENT*MONTHS);
    float temp=pow((1+intRate),nCmPrds);
    monPay=intRate*temp*loanAmt/(temp-1);
    totPaid=nCmPrds*monPay;
    intPaid=totPaid-loanAmt;
    
    //Display Output
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Using floating point values gives an error"<<endl;
    cout<<"Loan Amount                :$"<<setw(8)<<loanAmt<<endl;
    cout<<"Interest Rate %/month      : "<<setw(8)<<intRate<<endl;
    cout<<"Number of months           :    "<<static_cast<int>(nCmPrds)<<endl;
    cout<<"Monthly Payment            :$"<<setw(8)<<monPay<<endl;
    cout<<"Interest Paid              :$"<<setw(8)<<intPaid<<endl;
    cout<<"Total Paid                 :$"<<setw(8)<<totPaid<<endl;
    
    //Process values -> Map inputs to Outputs
    monPay=intRate*temp*loanAmt/(temp-1);
    int mp=monPay*100+0.5;//Calculate to the number of pennies
    monPay=mp/100.0f;        //Accurate to the penny
    totPaid=nCmPrds*monPay;
    intPaid=totPaid-loanAmt;
    
    //Display Output
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    cout<<"Using integer values"<<endl;
    cout<<"Loan Amount                :$"<<setw(8)<<loanAmt<<endl;
    cout<<"Interest Rate %/month      : "<<setw(8)<<intRate<<endl;
    cout<<"Number of months           :    "<<static_cast<int>(nCmPrds)<<endl;
    cout<<"Monthly Payment            :$"<<setw(8)<<monPay<<endl;
    cout<<"Interest Paid              :$"<<setw(8)<<intPaid<<endl;
    cout<<"Total Paid                 :$"<<setw(8)<<totPaid<<endl;

    //Exit Program
    return 0;
}

