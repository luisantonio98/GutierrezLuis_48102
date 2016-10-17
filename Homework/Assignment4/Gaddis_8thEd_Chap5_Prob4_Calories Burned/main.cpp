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
    float calpmin=3.6f;    //calories burned per minute
    float calburn;         //calories burned
    
    //Input or initialize values Here
    
    //Process/Calculations Here
    
    for(float minutes=5; minutes<=30;minutes+=5){
        calburn=minutes*calpmin;
        cout<<"In "<<minutes<<" minutes, you have burned "<<calburn<<" calories.\n";
    }
    
    //Output Located Here
    

    //Exit
    return 0;
}

