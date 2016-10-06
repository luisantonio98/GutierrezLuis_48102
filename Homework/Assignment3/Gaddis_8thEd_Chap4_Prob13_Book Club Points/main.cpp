/* 
 * File:   main.cpp
 * Author: Luis Gutierrez
 * Created on October 5, 2016, 2:10 PM
 * Purpose: Calculate the amount of points earned for book purchases
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
    int nbooks; //Number of books
    int points; //Amount of points earned
    

    //Input values
    cout<<"Please input the number of books you purchased."<<endl;
    cin>>nbooks;
    
    //Process values -> Map inputs to Outputs
    cout<<"n++++++++++++++++++++++++++++++\n"
        <<"       Book Club Points"  
        <<"\n+++++++++++++++++++++++++++++++\n\n";
    
    if (nbooks==1)
    {    
        points=5; 
        cout<<"You have earned "<<points<<"points.\n\n";
    }
    
    if(nbooks==2)
    {
        points=15;
        cout<<"You have earned "<<points<<" points.\n\n";
    }
    
    if(nbooks==3)
    {    
        points=30;
        cout<<"You have earned "<<points<<" points.\n\n";
    }
    
    if(nbooks>=4)
    {    
        points=60;
        cout<<"You have earned "<<points<<" points.\n\n";
    }
    
    
    if(nbooks==0)
    {
        points=0;
        cout<<"You have earned 0 points.\n\n";
    }
    
    if(nbooks<0)
    { 
        cout<<"The number of books cannot be negative.\n\n";
    }
     
    
    //Display Output

    //Exit Program
    return 0;
}


