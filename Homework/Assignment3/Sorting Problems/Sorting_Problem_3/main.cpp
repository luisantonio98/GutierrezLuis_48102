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
    short d;
    //Input or initialize values Here
    cout<<"Input three numbers"<<endl;
    cin>>a>>b>>c>>d;
    
    //Process/Calculations Here
    cout<<"These are your numbers in ascending order."<<endl;
   {if      ((a<b)&&(a<c)&&(b<c)&&(c<d)&&(c>b))cout<<a<<","<<b<<","<<c<<","<<d;
    else if ((a<b)&&(a<d)&&(a<c)&&(c>d)&&(d>b))cout<<a<<","<<b<<","<<d<<","<<c;
    else if ((a<c)&&(a<b)&&(a<d)&&(c<b)&&(d<b))cout<<a<<","<<c<<","<<b<<","<<d;
    else if ((a<c)&&(a<d)&&(a<b)&&(b>d)&&(d>c))cout<<a<<","<<c<<","<<d<<","<<b;
    else if ((a<d)&&(a<b)&&(a<c)&&(b>d)&&(b<c))cout<<a<<","<<b<<","<<d<<","<<c;
    else if ((a<d)&&(a<c)&&(a<b)&&(b>d)&&(b>c))cout<<a<<","<<<d<","<<c<<","<<b;
   }
    
    //Output Located Here

    //Exit
    return 0;
}

