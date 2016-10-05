/* 
 * File:   main.cpp
 * Author: Luis Gutierrez
 * Created on October 5, 2016, 1:05 PM
 * Purpose: Determine which rectangle's area is larger than the other 
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cmath>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    short fl; //first length
    short sl; //second length
    short fw; //first width
    short sw; //second width
    short fa; //first area
    short sa; //second area
    
    //Input values
    cout<<"Input the length and width of the first rectangle."<<endl;
    cin>>fl>>fw;
    
    cout<<"Input the length and width of the second rectangle."<<endl;
    cin>>sl>>sw;
   
    //Process values -> Map inputs to Outputs
    fa=fl*fw; //first area = first length * first width
    sa=sl*sw; //second area = second length * second width
    
    if      (fa>sa)cout<<"The first rectangle is larger than the second rectancle. Area 1="<<fa<<" Area 2="<<sa;
    else if (fa<sa)cout<<"The second rectangle is larger that the first rectangle. Area 2="<<sa<<" Area 1="<<fa;
    else           cout<<"The two triangles are the same size. Area 1="<<fa<<cout<<" Area 2="<<sa;
    
    //Display Output

    //Exit Program
    return 0;
}


