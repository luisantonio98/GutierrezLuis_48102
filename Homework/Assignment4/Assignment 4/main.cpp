/* 
   File:   main
   Author: Luis Gutierrez
   Created on October 17, 8:50 PM
   Purpose:  Menu without Functions
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>    //Formatting
#include <cmath>      //Log
#include <cstdlib>
#include <ctime>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const unsigned char PERCENT=100;  //Global conversion
float GRAVITY=6.673e-8f;          //Universal gravity constant in cm^3/g/sec^2
float CNKGGRM=1000.0f;            //Conversion from kilograms to grams
float CNSGGRM=14593.9f;           //Conversion from slugs to grams
float CNKMMET=1000.0f;            //Conversion from kilometers to meters
float CNMETCM=100.0f;             //Conversion from meters to centimeters
float CNDYNLB=2.24809e-6f;        //Conversion from Dymes to pounds
float CNSGLBS=32.174f;            //Conversion from slugs to pounds
//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int menuItm;    //Choice from menu
    
    //Loop until users exits
    do{
    
        //Prompt for problem for user input
        cout<<"1.  Type 1  for Gaddis_7thEd_Chap5_Prob20_Guessing game"<<endl;
        cout<<"2.  Type 2  for Gaddis_8thEd_Chap5_Prob1_Sum of Numbers"<<endl;
        cout<<"3.  Type 3  for Gaddis_8thEd_Chap5_Prob3_Ocean Levels"<<endl;
        cout<<"4.  Type 4  for Gaddis_8thEd_Chap5_Prob4_Calories Burned"<<endl;
        cout<<"5.  Type 5  for Gaddis_8thEd_Chap5_Prob5_Membership Fees"<<endl;
        cout<<"6.  Type 6  for Gaddis_8thEd_Chap5_Prob6_Distance Calculator"<<endl;
        cout<<"7.  Type 7  for Gaddis_8thEd_Chap5_Prob7_Hotel Occupency"<<endl;
        cout<<"8.  Type 8  for Gaddis_8thEd_Chap5_Prob8_Pennies for Pay"<<endl;
        cout<<"9.  Type 9  for Gaddis_8thEd_Chap5_Prob22_Square Display"<<endl;
        cout<<"10. Type 10 for Savitch_9thEd_Chap4_PracProb7_Weighin"<<endl;
        cin>>menuItm;

        //Go to the Problem
        switch(menuItm){
            case 1:{
                cout<<"Inside Gaddis_7thEd_Chap5_Prob20_Guessing game"<<endl;
                //Set the random number seed
                srand(static_cast<unsigned int>(time(0)));

                //Declaration of Variables
                int range,nGuess;
                int number,answer;

                //Input values
                cout<<"This is the guessing game"<<endl;
                cout<<"Choose a range for the number to guess"<<endl;
                cin>>range;

                //Process values -> Map inputs to Outputs
                nGuess=log(range)/log(2)+1;
                cout<<"You have "<<nGuess<<" guesses to find the random number"<<endl;
                number=rand()%(range+1); //[0,range]

                //Display Results of each Guess
                for(int guess=1;guess<=nGuess;guess++){
                    cout<<"Input your guess"<<endl;
                    cin>>answer;
                    if(answer>number)cout<<"Guess to High"<<endl;
                    else if(answer<number)cout<<"Guess to Low"<<endl;
                    else{
                        cout<<"You guessed the number"<<endl;
                        exit(0);
                    }
                }
                cout<<"Sorry too many guesses"<<endl;
                cout<<endl;
                break;
            }
            
            case 2:{
                cout<<"Inside Gaddis_8thEd_Chap5_Prob1_Sum of Numbers"<<endl;
                //Declaration of Variables
                    int num=0;
                    int sum=0;


                    //Input values
                    cout<<"Input any number."<<endl;
                    cin>>num;

                    //Process values -> Map inputs to Outputs
                    while (num<0){
                        cout<<"Please enter any POSITIVE number.\n";
                        cin>>num;
                    }

                    for(int n=1;n<=num;n++){
                        sum +=n;
                    }
                    cout<<"The sum of all the digits preceding, and including your input is "<<sum<<endl;
                cout<<endl;
                break;
            }
            
            case 3:{
                cout<<"Inside Gaddis_8thEd_Chap5_Prob3_Ocean Levels"<<endl;
                //Declaration of Variables
                float level=0;       //ocean level
                float years=25;      //number of year

                //Input values

                //Process values -> Map inputs to Outputs
                for(float year=1;year<=years;year++){
                    level+=1.5;
                    cout<<"year "<<year<<": "<<level<<" mm"<<endl;
                }
                cout<<endl;
                break;
            }
            
            case 4:{
                cout<<"Inside Gaddis_8thEd_Chap5_Prob4_Calories Burned"<<endl;
                 //Declare all Variables Here
                float calpmin=3.6f;    //calories burned per minute
                float calburn;         //calories burned

                //Input or initialize values Here

                //Process/Calculations Here

                for(float minutes=5; minutes<=30;minutes+=5){
                    calburn=minutes*calpmin;
                    cout<<"In "<<minutes<<" minutes, you have burned "<<calburn<<" calories.\n";
                }
                cout<<endl;
                break;
            }
            
            case 5:{
                cout<<"Inside Gaddis_8thEd_Chap5_Prob5_Membership Fees"<<endl;
                //Declaration of Variables
                float memberP=2500;     //initial membership cost
                float increase=0.04f;    //percentage increase per year
                float years=6;
                //Input values


                //Process values -> Map inputs to Outputs
                for(int year=1;year<=years;year++){
                    memberP=memberP+(memberP*increase);
                    cout<<setprecision(2)<<fixed<<showpoint<<"Year "<<year<<" fees are $"<<memberP<<endl;    
                }
                cout<<endl;
                break;
            }
            
            case 6:{
                cout<<"Inside Gaddis_8thEd_Chap5_Prob6_Distance Calculator"<<endl;
                 //Declaration of Variables
                    float distance,speed;  //Distance traveled, Speed of the vehicle
                    int time;              //time in hours

                    //Input values
                    cout<<"What is the speed of the vehicle?"<<endl;
                    cin>>speed;

                        //check the input
                        while(speed<0){
                        cout<<"Speed must be GREATER than ZERO."<<endl;
                        cout<<"Please enter another speed."<<endl;
                        cin>>speed;
                        }

                    cout<<"How many hours has it traveled?"<<endl;
                    cin>>time;

                        //check the input
                         while(time<1){
                        cout<<"Time must be GREATER than ZERO."<<endl;
                        cout<<"Please enter a larger time."<<endl;
                        cin>>time;
                        }
                    cout<<"\nHour\tDistance Traveled\n";
                    cout<<"_________________________\n";

                    //Process values -> Map inputs to Outputs
                    for(int t=1;t<=time;t++){
                        distance=speed*t;
                        cout<<t<<"\t"<<distance<<" miles"<<endl;
                    }
                    cout<<endl;
                break;
            }
            
            case 7:{
                cout<<"Inside Gaddis_8thEd_Chap5_Prob7_Hotel Occupency"<<endl;
                //Declaration of Variables
                int roomPflr=0;          //rooms per floor
                int totroom=0;           //total number of rooms
                int totfloor=0;          //total number of floors
                int ocpiroom=0;          //number of rooms occupied per floor
                int totocrm=0;           //Total number of rooms occupied in the hotel
                float percocu=0.0f;      //percentage of the rooms occupied

                //Input values
                cout<<"Input the number of floors"<<endl;
                cin>>totfloor;
                    while (totfloor<1){
                    cout<<"Number of floors must be at least one. Please re-enter"<<endl;
                    cin>>totfloor;
                    }
                cout<<"Input";

                //Process values -> Map inputs to Outputs
                for(int floor=1;floor<=totfloor;floor++){
                    if(floor!=13){
                        cout<<"Enter the number of rooms on this floor: Floor "<<floor<<endl;
                        cin>>roomPflr;
                        while(roomPflr<10){
                            cout<<"Number of rooms on floor must be at least 10. Please re-enter."<<endl;
                            cin>>roomPflr;
                        }
                        cout<<"How many rooms are occupied?"<<endl;
                        cin>>ocpiroom;

                    }

                    totroom+=roomPflr;
                    totocrm+=ocpiroom;           
                }
                percocu=(totocrm*1.0/totroom)*100.00f;

                cout<<"The hotel has a total of "<<totfloor<<" floors."<<endl;
                cout<<"The hotel has a total of "<<totroom<<" rooms."<<endl;
                cout<<"There are "<<totocrm<<" rooms occupied."<<endl;
                cout<<"There are "<<totroom-totocrm<<" available rooms."<<endl;
                cout<<"The percentage of occupied rooms is "<<setprecision(2)<<fixed<<percocu<<"%"<<endl;
                cout<<endl;
                break;
            }
            case 8:{
                
                cout<<"Inside Gaddis_8thEd_Chap5_Prob8_Pennies for Pay"<<endl;
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
                cout<<endl;
                break;
            }
            
            case 9:{
                cout<<"Inside Gaddis_8thEd_Chap5_Prob22_Square Display"<<endl;
                //Declaration of Variables
                int sSize=0;

                //Input values
                cout<<"Enter a number between 1 and 15"<<endl;
                cin>>sSize;

                //Process values -> Map inputs to Outputs
                for(int row=1;row<=sSize;row++){
                    for(int column=1;column<=sSize;column++){
                        cout<<"X ";
                    }
                    cout<<endl;
                }
                cout<<endl;
                break;
            }
            
            case 10:{
                cout<<"Inside Savitch_9thEd_Chap4_PracProb7_Weighin"<<endl;
                //Declare all Variables Here
                float msEarth=5.972e24;   //Google look up in kilograms
                float msMark=6.0f;         //Mass of mark in slugs
                float rEarth=6371.0f;     //Google radius of the earth
                float weight;             //Force of attraction from Physics


                //Conversions of inputs
                msEarth=CNKGGRM;           //Convert mass of the earth to grams
                msMark=CNSGGRM;            //Convert mass of Mark to grams
                rEarth=CNKMMET*CNMETCM;     //Convert the radius to centimeters

               //Process/Calculations Here
                weight=GRAVITY*msMark*msEarth/rEarth/rEarth; //weak force attraction due to gravity
                weight=CNDYNLB;                              //Convert dynes to pounds


                //Output Located Here
                cout<<"According to the Weak Force of Gravity, Mark weighs "<<weight<<" lbs."<<endl;
                cout<<"As a check Mark weighs "<<6*CNSGLBS<<" lbs"<<endl;
                cout<<"The percentage error in the radius of Earth = "<<100.0f*18/rEarth<<"%"<<endl;
                cout<<"The margin of error for the weight = "<<(weight-6*CNSGLBS)/weight*100.0f<<" lbs"<<endl;
                cout<<endl;
                break;
            }//End Case
        }//End the Switch/Case
    }while(menuItm>0&&menuItm<=10);//Ends the Do-While Loop

    //Exit Program
    return 0;
}