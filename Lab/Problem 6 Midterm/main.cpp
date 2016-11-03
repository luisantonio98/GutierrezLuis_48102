/* 
 * File:   main.cpp
 * Author: Luis Gutierrez
 * Created on November 1, 2016, 11:30 AM
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cmath>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const float PI=4*atan(1);

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float x,seq=1,term=1;
    int n;
    
    //Input values
    n=50;
    x=PI/3;
    
    //Process values -> Map inputs to Outputs
    for(int cnt=1,nterms=2;nterms<=n;cnt+=2,nterms++){
        term*=-1.0f*x*x/cnt/(cnt+1);
        seq+=term;
    }
    
    //Display Output
    cout<<"Sequence = "<<seq<<endl;
    cout<<"Cos("<<x<<")="<<cos(x)<<endl;
    
    //Exit Program
    return 0;
}

