/* 
   File:  Military Budget Calculation main
   Author: Luis Gutierrez
   Created on September 08, 2016, 10:11 AM
   Purpose: Calculate the Military Budget 2016 
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const char PERCENT=100; //Conversion to percentage

//Function prototypes
   
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float FedBudg=3.95e12f;
    float MiliSpnd=0.6e12f;
    float MiliBudg, Perc; //Military Budget, Percentage
    
    //Input values
    MiliBudg=MiliSpnd/FedBudg;
    Perc=MiliBudg*100;
    //Process values -> Map inputs to Outputs
    
    //Display Output
            cout<<"Military Budget is "<<MiliBudg<<endl;
            cout<<"The Percentage is "<<static_cast<int>(Perc)<<"%"<<endl;
    //Exit Program
    return 0;
}