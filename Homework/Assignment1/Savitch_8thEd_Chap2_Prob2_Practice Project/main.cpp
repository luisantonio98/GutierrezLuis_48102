/* 
 * File:   main.cpp
 * Author: Luis Gutierrez
 * Created on September 20, 2016, 11:28 AM
 * Purpose: Iteration to find Square Root
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <ctime>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float MAXRAND=pow(2,31)-1;//Max signed positive value for int

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    float n,guess,r;
    float scale=90, shift=10;
    short counter=1;
    
    //Input values - float random number (10,100) vs. 
    //               integer random number rand ()%scale+shift [10,100]
    n=rand()/MAXRAND*scale+shift;
    guess=n/2;
            
    //Display th initialization
    cout<<"The number to find the square root of = "<<n<<endl;
    cout<<"The initial guess = "<<guess<<endl;
    
    //First Pass
    r=n/guess;
    guess=(guess+r)/2;
    
    //Display Output
    cout<<fixed<<showpoint<<setprecision(4)<<endl;
    cout<<"Pass "<<counter<<"   [r,guess] = ["<<setw(7)<<r<<","<<setw(7)<<guess<<"]"<<endl;
    
    //Second Pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    
    //Display Output
    cout<<"Pass "<<counter<<"   [r,guess] = ["<<setw(7)<<r<<","<<setw(7)<<guess<<"]"<<endl;
    
    //Third Pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    
    //Display Output
    cout<<"Pass "<<counter<<"   [r,guess] = ["<<setw(7)<<r<<","<<setw(7)<<guess<<"]"<<endl;
    
    //Fourth Pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    
    //Display Output
    cout<<"Pass "<<counter<<"   [r,guess] = ["<<setw(7)<<r<<","<<setw(7)<<guess<<"]"<<endl;
    
    //Fifth Pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    
    //Display Output
    cout<<"Pass "<<counter<<"   [r,guess] = ["<<setw(7)<<r<<","<<setw(7)<<guess<<"]"<<endl;
    
    //Sixth Pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    
    //Display Output
    cout<<"Pass "<<counter<<"   [r,guess] = ["<<setw(7)<<r<<","<<setw(7)<<guess<<"]"<<endl;
    
    //Seventh Pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    
    //Display Output
    cout<<"Pass "<<counter<<"   [r,guess] = ["<<setw(7)<<r<<","<<setw(7)<<guess<<"]"<<endl;
    
    //Eighth Pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    
    //Display Output
    cout<<"Pass "<<counter<<"   [r,guess] = ["<<setw(7)<<r<<","<<setw(7)<<guess<<"]"<<endl;
    
    //The answer or solution is
    cout<<"The sqrt ("<<n<<") = "<<sqrt(n)<<endl;
    
    //Exit
    return 0;
}

