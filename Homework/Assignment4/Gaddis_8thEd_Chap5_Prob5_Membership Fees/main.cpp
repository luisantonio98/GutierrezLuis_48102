/* 
 * File:   main.cpp
 * Author: Luis Gutierrez
 * Created on October 17, 2016, 4:19 PM
 * Purpose: Display the projected rates for 6 years
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>    //Formatting
using namespace std;  //Name-space used in the System Library

//User Libraries


//Global Constants
const unsigned char PERCENT=100;//Global conversion

//Function prototypes


//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float memberP=2500;     //initial membership cost
    float increase=0.04f;    //percentage increase per year
    float years=6;
    //Input values
    
    
    //Process values -> Map inputs to Outputs
    for(int year=1;year<=years;year++){
        memberP=memberP+(memberP*increase);
        cout<<setprecision(2)<<fixed<<showpoint<<"Year "<<year<<" fees are $"<<memberP<<endl;    
    }
    
    //Display Output
    

    //Exit Program
    return 0;
}




