/* 
 * File:   main.cpp
 * Author: Luis Guterrez
 * Created on October 17, 2016, 4:55 PM
 * Purpose: Display the distance a vehicle has traveled
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
    float distance,speed;  //Distance traveled, Speed of the vehicle
    int time;              //time in hours
    
    //Input values
    cout<<"What is the speed of the vehicle?"<<endl;
    cin>>speed;
    
        //check the input
        while(speed<0){
        cout<<"Speed must be GREATER than ZERO."<<endl;
        cout<<"Please enter another speed."<<endl;
        cin>>speed;
        }
    
    cout<<"How many hours has it traveled?"<<endl;
    cin>>time;
    
        //check the input
         while(time<1){
        cout<<"Time must be GREATER than ZERO."<<endl;
        cout<<"Please enter a larger time."<<endl;
        cin>>time;
        }
    cout<<"\nHour\tDistance Traveled\n";
    cout<<"_________________________\n";
    
    //Process values -> Map inputs to Outputs
    for(int t=1;t<=time;t++){
        distance=speed*t;
        cout<<t<<"\t"<<distance<<" miles"<<endl;
    }
    
    //Display Output

    //Exit Program
    return 0;
}


