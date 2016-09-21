/* 
 * File:   main.cpp
 * Author: Luis Gutierrez
 * Created on September 9, 2016, 7:08 PM
 * Purpose: Calculate Total Sales Tax
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
char PERCENT=100;
//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    char purch=52;      //Initial Purchase
    float statax=4e-2f; //State Tax
    float countx=2e-2f; //County Tax
    float tottax;       //Total Tax
    float total;
    //Input values
    
    //Process values -> Map inputs to Outputs
    tottax=(purch*statax)+(purch*countx);
    total=purch+tottax;
    //Display Output
    cout<<"The initial purchase is             $"<<purch<<endl;
    cout<<"The total sales tax is              $"<<tottax<<endl;
    cout<<"The total price including tax is    $"<<total<<endl;

    //Exit Program
    return 0;
}
