/* 
 * File:   main.cpp
 * Author: Luis Gutierrez
 * Created on September 13, 2016, 11:50 AM
 * Purpose: To calculate when home owners in riverside will have beach front property.
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float CVNMMFT=304.8;//Conversion mm to feet from Google
const float CVNMMM=1000;//Conversion from mm to meters
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float rate=1.5;//Sea level rise rate in mm per year
    int nYear1=5,nYear2=7,nYear3=10;//years to calculate rise
    float rise1,rise2,rise3;//solution for the three years from above
    int nYrBch;//Number of years before your home is beach front property
    float elevRiv=860;//Elevation of Riverside in feet according to wikipedia
    
    //Input or initialize values Here
    
    //Process/Calculations Here
    rise1=rate*nYear1;
    rise2=rate*nYear2;
    rise3=rate*nYear3;
    nYrBch=elevRiv/rate*CVNMMFT;
            
            
            
    //Output Located Here
    cout<<"The rate of Sea Level rise = "<<rate<<"mm/year."<<endl;
    cout<<"After"<<nYear1<<"years, the sea will rise "<<rise1<<" mm."<<endl;
    cout<<"After"<<nYear1<<"years, the sea will rise "<<rise2<<" mm."<<endl;
    cout<<"After"<<nYear1<<"years, the sea will rise "<<rise3<<" mm."<<endl;
    cout<<"At this rate, Riverside won't have beach front property for ";
    cout<<nYrBch<<" years.";
    cout<<"This rise equates to "<<nYrBch*rate/CVNMMM<<" meters.";
    

    //Exit
    return 0;
}

