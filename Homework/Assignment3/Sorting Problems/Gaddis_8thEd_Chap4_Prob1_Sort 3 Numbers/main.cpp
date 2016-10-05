/* 
 * File:   main.cpp
 * Author: Luis Gutierrez
 * Created on October 4, 2016, 11:20 AM
 * Purpose: Sort a and b
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    short a;
    short b;
    short c;
    //Input or initialize values Here
    cout<<"Input three numbers"<<endl;
    cin>>a>>b>>c;
    
    //Process/Calculations Here
    cout<<"These are your numbers in ascending order."<<endl;
   {if      ((a<b)&&(a<c)&&(b<c))cout<<a<<","<<b<<","<<c;
    else if ((a>b)&&(a>c)&&(b<c))cout<<b<<","<<c<<","<<a;
    else if ((a<b)&&(a>c)&&(b>c))cout<<c<<","<<a<<","<<b;
    else if ((a<b)&&(a<c)&&(b>c))cout<<a<<","<<c<<","<<b;
    else if ((a>b)&&(a<c)&&(b<c))cout<<b<<","<<a<<","<<c;
    else if ((a>b)&&(a>c)&&(b>c))cout<<c<<","<<b<<","<<a<<endl;
   }
    //Output Located Here

    //Exit
    return 0;
}

