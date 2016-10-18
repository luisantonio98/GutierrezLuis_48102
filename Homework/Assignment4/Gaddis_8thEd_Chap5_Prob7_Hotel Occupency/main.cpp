/* 
 * File:   main.cpp
 * Author: Luis Guterrez
 * Created on October 17, 2016, 7:30 PM
 * Purpose: CPP Template
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>    //Formatting
using namespace std;  //Name-space used in the System Library

//User Libraries


//Global Constants
const unsigned char PERCENT=100;  //Global conversion

//Function prototypes


//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int roomPflr=0;          //rooms per floor
    int totroom=0;           //total number of rooms
    int totfloor=0;          //total number of floors
    int ocpiroom=0;          //number of rooms occupied per floor
    int totocrm=0;           //Total number of rooms occupied in the hotel
    float percocu=0.0f;      //percentage of the rooms occupied
    
    //Input values
    cout<<"Input the number of floors"<<endl;
    cin>>totfloor;
        while (totfloor<1){
        cout<<"Number of floors must be at least one. Please re-enter"<<endl;
        cin>>totfloor;
        }
    cout<<"Input";
    
    //Process values -> Map inputs to Outputs
    for(int floor=1;floor<=totfloor;floor++){
        if(floor!=13){
            cout<<"Enter the number of rooms on this floor: Floor "<<floor<<endl;
            cin>>roomPflr;
            while(roomPflr<10){
                cout<<"Number of rooms on floor must be at least 10. Please re-enter."<<endl;
                cin>>roomPflr;
            }
            cout<<"How many rooms are occupied?"<<endl;
            cin>>ocpiroom;
        
        }
        
        totroom+=roomPflr;
        totocrm+=ocpiroom;           
    }
    percocu=(totocrm*1.0/totroom)*100.00f;
    
    cout<<"The hotel has a total of "<<totfloor<<" floors."<<endl;
    cout<<"The hotel has a total of "<<totroom<<" rooms."<<endl;
    cout<<"There are "<<totocrm<<" rooms occupied."<<endl;
    cout<<"There are "<<totroom-totocrm<<" available rooms."<<endl;
    cout<<"The percentage of occupied rooms is "<<setprecision(2)<<fixed<<percocu<<"%"<<endl;
    
    //Display Output
    

    //Exit Program
    return 0;
}


