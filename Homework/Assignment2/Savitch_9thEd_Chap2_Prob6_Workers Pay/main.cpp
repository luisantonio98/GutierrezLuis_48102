/* 
 * File:   main.cpp
 * Author: Luis Gutierrez
 * Created on September 22, 2016, 11:43 AM
 * Purpose: Calculate how much the workers get paid
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
char PERCENT=100; 

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float rateP=16.78;  //Amount the workers earn per hour
    float sstax=6e-1;   //Social security tax
    float fdtax=1.4e-1; //Federal income tax
    float sTax=5e-2;    //State tax
    char  uTax=10;      //Union tax
    char  depends=35;   //Amount paid if dependants is greater than 3
    float hours, otime, tgross, thome;  //total overtime pay, total gross  pay, total take-home pay
    
    //Input or initialize values Here
    cout<<"How many hours did you work?"<<endl;
    cin>>hours;
    cout<<"How many dependants do you have?"<<endl;
    cin>>depends;
    {
    if (hours >= 40) tgross= rateP * 40+1.5 * rateP * (hours-40);
    else tgross = rateP * hours;
    }
    {
        if (depends <= 3) cout<<"No additional charge for dependants";
        else thome=tgross - (tgross * sstax) - (tgross * fdtax) - 
                (tgross * sTax) - uTax - depends;
    }
    
    
    
    //Process/Calculations Here
    otime=rateP * 40+1.5 * rateP * (hours-40);                                    //Overtime
    tgross=rateP*hours+otime;                                                     //Gross Pay
    thome=tgross - (tgross * sstax) - (tgross * fdtax) - (tgross * sTax) -  uTax; //Take-home pay
    
    //Output Located Here
    cout<<"Your total gross pay is $"<<tgross<<endl;
    cout<<"Your take-home pay is   $"<<thome<<endl;
    

    //Exit
    return 0;
}

