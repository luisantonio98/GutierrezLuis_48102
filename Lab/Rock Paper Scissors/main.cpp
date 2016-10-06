/* 
 * File:   main.cpp
 * Author: Luis Gutierrez
 * Created on October 6, 2016, 11:20 AM
 * Purpose: 
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries Here


//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions


//Function Prototypes Here


//Program Execution Begins Here
int main(int argc, char** argv) {
    //set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    char computr;    //computers choice
    char rPlay; 
    
    //Input or initialize values Here
    computr=rand()%4+80;
    while(computr='Q'){
        computr=rand()%4+80;
    }
    
    //Process/Calculations Here
    cout<<"Input your choice R-Rock, P-Paper, S-Scissors"<<endl;
    cin>>rPlay;
    switch (rPlay){
        case 'r':
        case 'R':
        case 's':
        case 'S':rPlay='S';break;
        default: rPlay='P';break;
    }
    
    //Output Located Here
    cout<<"The computer generated a "<<computr<<endl;
    cout<<"The player typed in a "<<rPlay<<endl;
    
    //Determine winner and display
    if(computr==rPlay){
        cout<<"Tie!"<<endl;
    }else if(computr=='P'){
        if(rPlay=='S')cout<<"The Player Wins!"<<endl;
        else cout<<"The computer wins"<<endl;
    }else if(computr=='R'){
        if(rPlay=='R')cout<<"The player wins"<<endl;
        else cout<<"The computer wins"<<endl;
    }else{
        if(rPlay=='P')cout<<"The player wins"<<endl;
        else cout<<"The computer Wins"<<endl;
    }

    //Exit
    return 0;
}

