/* 
 * File:   main.cpp
 * Author: Luis Gutierrez
 * Created on October 4, 2016, 11:20 AM
 * Purpose: Sort a and b
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
    short a;
    short b;
    //Input or initialize values Here
    cout<<"Input two numbers"<<endl;
    cin>>a>>b;
    
    //Process/Calculations Here
    if (a<b)cout<<a<<","<<b;
    else cout<<b<<","<<a<<endl;
    
    //Output Located Here

    //Exit
    return 0;
}

