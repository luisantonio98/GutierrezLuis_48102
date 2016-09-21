/* 
 * File:   main.cpp
 * Author: Luis Gutierrez
 * Created on September 9, 2016, 7:48 PM
 * Purpose: Calculate the total sales including sales tax
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>    //Formatting
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
char PERCENT=100; 
//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float item1=12.95f;                     //item 1
    float item2=24.95f;                     //item 2
    float item3=6.95f;                      //item 3
    float item4=14.95f;                     //item 4
    float item5=3.95;                       //item 5
    float saltax=6e-2f;                     //sales tax
    float subtot, amnttax, total;           //subtotal, amount of tax, total
    //Input values
    
    //Process values -> Map inputs to Outputs
    subtot=item1+item2+item3+item4+item5;
    amnttax=subtot*saltax;
    total=subtot+amnttax;
    
    
    //Display Output
    cout<<fixed<<showpoint<<setprecision(2)<<endl;
    cout<<"The subtotal is                      $"<<subtot<<endl;
    cout<<"The amount of tax is                 $"<<amnttax<<endl;
    cout<<"The total amount including tax is    $"<<total<<endl;

    //Exit Program
    return 0;
}