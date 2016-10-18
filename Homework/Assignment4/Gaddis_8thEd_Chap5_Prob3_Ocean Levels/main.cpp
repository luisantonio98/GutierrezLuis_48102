/* 
 * File:   main.cpp
 * Author: Luis Gutierrez
 * Created on October 17, 2016, 4:04 PM
 * Purpose: Display a table showing the number of mm the ocean 
            will rise in 25 years
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
    float level=0;       //ocean level
    float years=25;      //number of years
    
    
    //Input values
    
    
    //Process values -> Map inputs to Outputs
    for(float year=1;year<=years;year++){
        level+=1.5;
        cout<<"year "<<year<<": "<<level<<" mm"<<endl;
    }
    
    //Display Output
    

    //Exit Program
    return 0;
}




