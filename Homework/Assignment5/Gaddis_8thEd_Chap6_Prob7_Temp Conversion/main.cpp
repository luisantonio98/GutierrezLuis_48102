/* 
 * File:   main.cpp
 * Author: Luis Gutierrez
 * Created on November 1, 2016, 10:00 AM
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>    //Format
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
float tempCnv(float);
float tempCnv(float,float,float,float,float);


//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare freezing and boiling pts of water
    //for degree Fahrenheit and Celsius 
    float f1=32.0f,f2=212.0f,c1=0.0f,c2=100.0f;
    int begF=0,endF=250;
    
    //Process values -> Map inputs to Outputs
    cout<<"Degree F   Degree C   Degree C"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    for(int degF=begF;degF<=endF;degF++){
        cout<<setw(6)<<degF
            <<setw(12)<<tempCnv(degF)
            <<setw(11)<<tempCnv(degF,f1,f2,c1,c2)<<endl;
    }

    //Exit Program
    return 0;
}

//Temperature conversion from degree Fahrenheit to Celsius
//Input
//  f->Fahrenheit
//Output
//  c->Celsius
float tempCnv(float f){
    return (f-32.0f)*5/9;
}

//Temperature conversion from degree Fahrenheit to Celsius
//Input
//  f->Fahrenheit
//Output
//  c->Celsius
float tempCnv(float f,float f1,float f2,float c1,float c2){
    return c1+(f-f1)*(c2-c1)/(f2-f1);
}

