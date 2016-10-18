/* 
 * File:   main.cpp
 * Author: Luis Guterrez
 * Created on October 17, 2016, 8:30 PM
 * Purpose: Create a square with the character "X"
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
    int sSize=0;
    
    //Input values
    cout<<"Enter a number between 1 and 15"<<endl;
    cin>>sSize;
    
    //Process values -> Map inputs to Outputs
    for(int row=1;row<=sSize;row++){
        for(int column=1;column<=sSize;column++){
            cout<<"X ";
        }
        cout<<endl;
    }
    
    //Display Output

    //Exit Program
    return 0;
}


