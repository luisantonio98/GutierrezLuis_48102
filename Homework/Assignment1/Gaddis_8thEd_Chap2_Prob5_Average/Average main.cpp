/* 
 * File:   main.cpp
 * Author: Luis Gutierrez
 * Created on September 13, 2016, 12:27 PM
 * Purpose: Calculate the average/mean and standard deviation
 */

//System Libraries Here
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int x1,x2,x3,x4,x5;//Input values
    float avg,stdev;
    
    //Input or initialize values Here
    cout<<"This program calculates the mean and standard deviation"<<endl;
    cout<<"Input 5 Values"<<endl;
    cin>>x1>>x2>>x3>>x4>>x5;
    
    
    //Process/Calculations Here
    avg=(x1+x2+x3+x4+x5)/5;
    stdev=pow(((x1-avg)*(x1-avg)+(x2-avg)*(x2-avg)+(x3-avg)*(x3-avg)+
            (x4-avg)*(x4-avg)+(x5-avg)*(x5-avg))/4,0.5);
    
    
    //Output Located Here
    cout<<"The input values = "<<x1<<" "<<x2<<" "<<x3<<" "<<x4<<" "<<x5<<endl;
    cout<<"The mean = "<<avg<<endl;
    cout<<"The standard deviation = "<<stdev<<endl;

    //Exit
    return 0;
}

