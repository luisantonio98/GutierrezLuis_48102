/* 
 * File:   main.cpp
 * Author: Luis Gutierrez
 * Created on November 10, 2016, 11:16 AM
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
void  getScr(int &,int &,int &,int &,int &);//Get the scores
float  avgM1(int,int,int,int,int);          //Average the scores without minimum
int   getMin(int,int,int,int,int);          //Minimum Score

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int s1,s2,s3,s4,s5;//5 scores
    float avg;//Average minus 1 score
    
    //Input values
    getScr(s1,s2,s3,s4,s5);
    
    //Process values -> Map inputs to Outputs
    avg=avgM1(s1,s2,s3,s4,s5);
    
    //Display Output
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Average minus lowest score = "<<avg<<endl;

    //Exit Program
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   Get Min   ****************************************
//Purpose:  Find minimum of 5 scores
//Inputs:   Inputs to the function here -> Description, Range, Units
//  s1-s5-> 5 scores between [0,100]
//Output:   Outputs to the function here -> Description, Range, Units
//  min ->  Minimum of 5 scores
//******************************************************************************
int getMin(int s1,int s2,int s3,int s4,int s5){
    int min=s1;
    if(min>s2)min=s2;
    if(min>s3)min=s3;
    if(min>s4)min=s4;
    if(min>s5)min=s5;
    return min;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   Average   ****************************************
//Purpose:  Average of 5 scores minus the minimum
//Inputs:   Inputs to the function here -> Description, Range, Units
//  s1-s5-> 5 scores between [0,100]
//Output:   Outputs to the function here -> Description, Range, Units
//  avg ->  Average of 5 scores with the minimum
//******************************************************************************
float avgM1(int s1,int s2,int s3,int s4,int s5){
    return 0.25f*(s1+s2+s3+s4+s5-getMin(s1,s2,s3,s4,s5));
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************  Get Score  ****************************************
//Purpose:  Find minimum of 5 scores
//Input&Output:   Inputs to the function here -> Description, Range, Units
//  s1-s5-> 5 scores between [0,100]
//******************************************************************************
void  getScr(int &s1,int &s2,int &s3,int &s4,int &s5){
    //Get data and determine if valid for each score
    int x;
    do{
        cout<<"Input score 1 between 0 and 100"<<endl;
        cin>>x;
    }while(x<0||x>100);
    s1=x;
    do{
        cout<<"Input score 2 between 0 and 100"<<endl;
        cin>>x;
    }while(x<0||x>100);
    s2=x;
    do{
        cout<<"Input score 3 between 0 and 100"<<endl;
        cin>>x;
    }while(x<0||x>100);
    s3=x;
    do{
        cout<<"Input score 4 between 0 and 100"<<endl;
        cin>>x;
    }while(x<0||x>100);
    s4=x;
    do{
        cout<<"Input score 5 between 0 and 100"<<endl;
        cin>>x;
    }while(x<0||x>100);
    s5=x;
}

