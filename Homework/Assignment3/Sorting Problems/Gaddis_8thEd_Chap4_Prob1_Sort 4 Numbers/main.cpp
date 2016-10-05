/* 
 * File:   main.cpp
 * Author: Luis Gutierrez
 *Created on October 5, 2016, 12:35 PM
 * Purpose: Sort 4 numbers in ascending order
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    short a,b,c,d;   //Characters for Num 1&2
    
    //Input values
    cout<<"Input Four Numbers"<<endl;
    cin>>a>>b>>c>>d;
    
    //Process values -> Map inputs to Outputs
    cout<<"From Smallest to Greatest "<<endl;
        
    //A Block
    {if ((a<b)&&(a<c)&&(b<c)&&(a<d)&&(d>b)&&(d>c)) cout<<a<<","<<b<<","<<c<<","<<d<<endl;
        else if ((a<b)&&(a<c)&&(b<c)&&(a<d)&&(d>b)&&(d<c)) cout<<a<<","<<b<<","<<d<<","<<c<<endl;
        else if ((a<b)&&(a<c)&&(b>c)&&(a<d)&&(d<b)&&(d>c)) cout<<a<<","<<c<<","<<d<<","<<b<<endl;
        else if ((a<b)&&(a<c)&&(b>c)&&(a<d)&&(d>b)&&(d>c)) cout<<a<<","<<c<<","<<b<<","<<d<<endl;
        else if ((a<b)&&(a<c)&&(b<c)&&(a<d)&&(d<b)&&(d<c)) cout<<a<<","<<d<<","<<b<<","<<c<<endl;
        else if ((a<b)&&(a<c)&&(b>c)&&(a<d)&&(d<b)&&(d<c)) cout<<a<<","<<d<<","<<c<<","<<b<<endl;
    }
    //B Block
    {if ((a>b)&&(a<c)&&(b<c)&&(a<d)&&(d>b)&&(d>c)) cout<<b<<","<<a<<","<<c<<","<<d<<endl;
        else if ((a>b)&&(a<c)&&(a<d)&&(b<c)&&(d>b)&&(d<c)) cout<<b<<","<<a<<","<<d<<","<<c<<endl;
        else if ((a>b)&&(a>c)&&(a>d)&&(b<c)&&(d>b)&&(d>c)) cout<<b<<","<<c<<","<<d<<","<<a<<endl;
        else if ((a>b)&&(a>c)&&(a<d)&&(b<c)&&(d>b)&&(d>c)) cout<<b<<","<<c<<","<<a<<","<<d<<endl;
        else if ((a>b)&&(a<c)&&(a>d)&&(b<c)&&(d>b)&&(d<c)) cout<<b<<","<<d<<","<<a<<","<<c<<endl;
        else if ((a>b)&&(a>c)&&(b<c)&&(a<d)&&(d>b)&&(d<c)) cout<<b<<","<<d<<","<<c<<","<<a<<endl;
    }
    //c Block
    {if ((c<a)&&(c<b)&&(c<d)&&(a<b)&&(a<d)&&(b<d)) cout<<c<<","<<a<<","<<b<<","<<d<<endl;
        else if ((c<a)&&(c<b)&&(c<d)&&(a<b)&&(a<d)&&(b>d)) cout<<c<<","<<a<<","<<d<<","<<b<<endl;
        else if ((c<a)&&(c<b)&&(c>d)&&(a>b)&&(a>d)&&(b<d)) cout<<c<<","<<b<<","<<d<<","<<a<<endl;
        else if ((c<a)&&(c<b)&&(c>d)&&(a>b)&&(a<d)&&(b<d)) cout<<c<<","<<b<<","<<a<<","<<d<<endl;
        else if ((c<a)&&(c<b)&&(c<d)&&(a>b)&&(a>d)&&(b>d)) cout<<c<<","<<d<<","<<b<<","<<a<<endl;
        else if ((c<a)&&(c<b)&&(c>d)&&(a<b)&&(a>d)&&(b>d)) cout<<c<<","<<d<<","<<a<<","<<b<<endl;
    }
    //D Block
    {if ((d<a)&&(d<b)&&(d<c)&&(a<b)&&(c>b)&&(c>a)) cout<<d<<","<<a<<","<<b<<","<<c<<endl;
        else if ((d<a)&&(d<b)&&(d<c)&&(a<b)&&(b<c)&&(a<c)) cout<<d<<","<<a<<","<<b<<","<<c<<endl;
        else if ((d<a)&&(d<b)&&(d<c)&&(a>b)&&(b<c)&&(a>c)) cout<<d<<","<<b<<","<<c<<","<<a<<endl;
        else if ((d<a)&&(d<b)&&(d<c)&&(a>b)&&(b<c)&&(a<c)) cout<<d<<","<<b<<","<<a<<","<<c<<endl;
        else if ((d<a)&&(d<b)&&(d<c)&&(a>b)&&(b>c)&&(a>c)) cout<<d<<","<<c<<","<<b<<","<<a<<endl;
        else if ((d<a)&&(d<b)&&(d<c)&&(a<b)&&(b>c)&&(a>c)) cout<<d<<","<<c<<","<<a<<","<<b<<endl;
    }
    
    
    
    //Display Output

    //Exit Program
    return 0;
}

