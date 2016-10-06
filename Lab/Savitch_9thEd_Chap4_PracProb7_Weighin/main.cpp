/* 
 * File:   main.cpp
 * Author: Luis Gutierrez
 * Created on October 6, 2016, 11:50 AM
 * Purpose: Calculate your weight 
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here


//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
float GRAVITY=6.673e-8f;    //Universal gravity constant in cm^3/g/sec^2
float CNKGGRM=1000.0f;         //Conversion from kilograms to grams
float CNSGGRM=14593.9f;      //Conversion from slugs to grams
float CNKMMET=1000.0f;         //Conversion from kilometers to meters
float CNMETCM=100.0f;          //Conversion from meters to centimeters
float CNDYNLB=2.24809e-6f;  //Conversion from Dynes to pounds
float CNSGLBS=32.174f;      //Conversion from slugs to pounds

//Function Prototypes Here


//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float msEarth=5.972e24;   //Google look up in kilograms
    float msMark=6.0f;         //Mass of mark in slugs
    float rEarth=6371.0f;     //Google radius of the earth
    float weight;             //Force of attraction from Physics
    
    
    //Conversions of inputs
    msEarth=CNKGGRM;           //Convert mass of the earth to grams
    msMark=CNSGGRM;            //Convert mass of Mark to grams
    rEarth=CNKMMET*CNMETCM;     //Convert the radius to centimeters
    
   //Process/Calculations Here
    weight=GRAVITY*msMark*msEarth/rEarth/rEarth; //weak force attraction due to gravity
    weight=CNDYNLB;                              //Convert dynes to pounds
    
    
    //Output Located Here
    cout<<"According to the Weak Force of Gravity, Mark weighs "<<weight<<" lbs."<<endl;
    cout<<"As a check Mark weighs "<<6*CNSGLBS<<" lbs"<<endl;
    cout<<"The percentage error in the radius of Earth = "<<100.0f*18/rEarth<<"%"<<endl;
    cout<<"The margin of error for the weight = "<<(weight-6*CNSGLBS)/weight*100.0f<<" lbs"<<endl;

    //Exit
    return 0;
}

