/* 
 * File:   main.cpp
 * Author: Luis Gutierrez
 * Created on October 11, 2016, 11:25 AM
 * Purpose:  
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
    float calburn=3.6;  //calories burned per minute
    float mins;         //number of minutes
    
    //Input or initialize values Here
    
    //Process/Calculations Here
    mins=5;
    while (mins<=30) {
        mins+5;
        cout<<calburn<<endl;
        break;
    }
    
    //Output Located Here
    

    //Exit
    return 0;
}

