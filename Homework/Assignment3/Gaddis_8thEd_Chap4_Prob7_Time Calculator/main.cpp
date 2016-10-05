/* 
 * File:   main.cpp
 * Author: Luis Gutierrez
 * Created on October 5, 2016, 1:05 PM
 * Purpose: Create a time calculator
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>    //Formatting
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float s; //Seconds
    
    //Input values
    cout<<"Input the number of seconds."<<endl;
    cin>>s;
    
    //Process values -> Map inputs to Outputs
    cout<<setprecision(2)<<fixed<<showpoint<<endl;
    if      (s>=86400)cout<<(s/86400)<<" Day(s) have/has passed.";
    else if  (s>=3600)cout<<(s/3600)<<" Hour(s) have/has passed.";
    else if    (s>=60)cout<<(s/60)<<" Minute(s) have/has passed."<<endl;
    
    //Display Output

    //Exit Program
    return 0;
}


