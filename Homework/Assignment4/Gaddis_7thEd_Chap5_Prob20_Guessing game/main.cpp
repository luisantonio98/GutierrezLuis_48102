/* 
 * File:   main.cpp
 * Author: Luis Gutierrez
 * Created on October 13, 2016 12:30 PM
 * Purpose:  Guessing Game
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cmath>      //Log
#include <cstdlib>
#include <ctime>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declaration of Variables
    int range,nGuess;
    int number,answer;
    
    //Input values
    cout<<"This is the guessing game"<<endl;
    cout<<"Choose a range for the number to guess"<<endl;
    cin>>range;
    
    //Process values -> Map inputs to Outputs
    nGuess=log(range)/log(2)+1;
    cout<<"You have "<<nGuess<<" guesses to find the random number"<<endl;
    number=rand()%(range+1); //[0,range]
    
    //Display Results of each Guess
    for(int guess=1;guess<=nGuess;guess++){
        cout<<"Input your guess"<<endl;
        cin>>answer;
        if(answer>number)cout<<"Guess to High"<<endl;
        else if(answer<number)cout<<"Guess to Low"<<endl;
        else{
            cout<<"You guessed the number"<<endl;
            exit(0);
        }
    }
    cout<<"Sorry too many guesses"<<endl;

    //Exit Program
    return 0;
}
