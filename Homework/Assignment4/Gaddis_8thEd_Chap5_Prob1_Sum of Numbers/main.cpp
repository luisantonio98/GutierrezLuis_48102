/* 
 * File:   main.cpp
 * Author: Luis Gutierrez
 * Created on October 17, 2016, 4:36 PM
 * Purpose: Display the sum of numbers
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int num=0;
    int sum=0;
    
    
    //Input values
    cout<<"Input any number."<<endl;
    cin>>num;
    
    //Process values -> Map inputs to Outputs
    while (num<0){
        cout<<"Please enter any POSITIVE number.\n";
        cin>>num;
    }
    
    for(int n=1;n<=num;n++){
        sum +=n;
    }
    cout<<"The sum of all the digits preceding, and including your input is "<<sum<<endl;
    //Display Output
    

    //Exit Program
    return 0;
}


