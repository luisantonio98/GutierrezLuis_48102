/* 
 * File:   main.cpp
 * Author: Luis Guterrez
 * Created on October 5, 2016, 1:05 PM
 * Purpose: CPP Template
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>    //Formatting
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int numDays=1;            //number of days
    float money=1.0;          //number of pennies
    float total=0.0;          //total amount of money earned
    float dayPay=0.0;         //amount of money earned in dollars
    
    //Input values
    cout<<"Input the number of days"<<endl;
    cin>>numDays;
    while (numDays<1){
        cout<<"The number of days CANNOT be negative or less than ZERO"<<endl;
        cin>>numDays;
    }
    for(int days=1;days<=numDays;days++){
        dayPay=money/100;
        cout<<setprecision(2)<<fixed<<showpoint<<"Day "<<days<<" you earned $"<<dayPay<<"\n";
        total+=dayPay;
        money*=2;
    }
    cout<<"Total earnings are $"<<total<<endl;
            
    //Process values -> Map inputs to Outputs
    
    //Display Output

    //Exit Program
    return 0;
}


