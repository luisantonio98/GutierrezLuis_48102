/* 
 * File:   main.cpp
 * Author: Luis Gutierrez
 * Created on September 29, 2016, 12:00 PM
 * Purpose:  To determine the Band of Radiation
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float waveL;
    
    //Input or initialize values Here
    cout<<"What is the wavelength of radiation in Meters"<<endl;
    cout<<"This program determines the band of radiation"<<endl;
    cin>>waveL;
    
    //Process/Calculations Here
    (waveL>=1e-2f) ?cout<<"Radio Band"<<endl:
    (waveL>=1e-3f) ?cout<<"Micro Wave Band"<<endl:
    (waveL>=7e-7f) ?cout<<"Infrared Wave Band"<<endl:
    (waveL>=4e-7f) ?cout<<"Visible Band"<<endl:
    (waveL>=1e-8f) ?cout<<"Ultra Violet Band"<<endl:
    (waveL>=1e-11f)?cout<<"X-Ray Band"<<endl:
                  cout<<"Gamma-Ray Band"<<endl;
    
    //Output Located Here
 

    //Exit
    return 0;
}

