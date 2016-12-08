/* 
 * File:   main.cpp
 * Author: Luis Gutierrez
 * Created on October 27, 2016, 11:25 AM
 * Purpose: Create a game
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
    int menuItm;    //Choice from menu
    char ch1;
    char ch2a;
    char ch2b;
    char cont;// continue or pick a different class
    //Loop until users exits
    do{
    
       //Prompt for problem for user input
       cout<<"1.  Type 1  for Berserker  Class"<<endl;
       cout<<"2.  Type 2  for Knight     Class"<<endl;
       cout<<"3.  Type 3  for Priest     Class"<<endl;
       cout<<"4.  Type 4  for Thief      Class"<<endl;
       cout<<"5.  Type 5  for Wizard     Class"<<endl;
       cout<<"6.  Type 6  for Deprived   Class"<<endl;
     
       cin>>menuItm;

       //Go to the Problem
       switch(menuItm){
           case 1:{
               cout<<"Berserker"<<endl;
               //Character Stats
               cout<<"Strength   10"<<endl;
               cout<<"Speech      5"<<endl;
               cout<<"Intellect   4"<<endl;
               cout<<"Defense     6"<<endl;
               cout<<"Faith       1"<<endl;
               cout<<"Sneak       4"<<endl;
               cout<<"Do you wish to continue as Berserker? Y/N?"<<endl;
               cin>>cont;
               switch(cont){
                   case 'y':
                   case 'Y':cont='Y';break;
                   case 'n':
                   case 'N':cont='N';break;
               }
               
                    while (cont == 'Y'){
                        cout<<"Berserker it is!"<<endl;
                        cout<<"You are a warrior seeking your fortune in a dungeon."<<endl;
                        cout<<"You spend your life day after day traveling deeper and deeper in the dungeon."<<endl;
                        cout<<""<<endl;
                        cout<<"1. Stop and listen, 2. Hide, 3. Run, 4.Prepare for a fight"<<endl;
                        cin>>ch1;
                    
                    if (cont == 'N') {
                        cout<<"1.  Type 1  for Berserker  Class"<<endl;
                        cout<<"2.  Type 2  for Knight     Class"<<endl;
                        cout<<"3.  Type 3  for Priest     Class"<<endl;
                        cout<<"4.  Type 4  for Thief      Class"<<endl;
                        cout<<"5.  Type 5  for Wizard     Class"<<endl;
                        cout<<"6.  Type 6  for Deprived   Class"<<endl;

                        cin>>menuItm;
                       }
                    }
               //Game
               
                
               //Process values -> Map inputs to Outputs 
               if(ch1==1){cout<<"You stop to listen and notice that you are being watched by what seems to be hundreds of red gleaming eyes."<<endl;
               cout<<"The eyes belong to a hunting party of goblins, they see the murderous intent in your eyes."<<endl;
               cout<<"They lunge at you and are overpowered. You're dead before you even hit the ground."<<endl;               
               }
               else if(ch1==2){cout<<"You hide behind the trunk of a nearby tree and notice that what you heard was a goblin hunting party."<<endl;
               cout<<"Goblin ears are worth 20 gold coins a piece and with the party consisting of over a dozen goblins you could make a fortune"<<endl;
               cout<<"1. Kill their leader, 2.Kill the whole goblin party, 3.leave them alone."<<endl;
               cin>>ch2a;
                    if(ch2a==1){cout<<"You sneak behind the leader of the hunting party and kill him with one swing of your massive sword."<<endl;
                    cout<<"Due to your swords length, you cut down three more goblins along with their leader."<<endl;
                        
                    }
                    else if(ch2a==2){
                        
                    }
                    else if(ch2a==3){
                        
                    }
               }
               else if(ch1==3){cout<<"You were not going to take your chances with whatever made that sound so you run towards some old ruins."<<endl;
               cout<<"You make it to the ruins and notice a large hunting party of goblins that was chasing you"<<endl;
               cout<<"Once you go inside the ruins, they back off and you hear heavy breathing behind a door. What do you do?"<<endl;
               cout<<"1. Open the door, 2. Sneak past the door, 3.Wait for sunrise."<<endl;
               cin>>ch2b;
               }
               else if(ch1==4){cout<<"You pull out your giant sword and as you unsheathe it, you hear whatever was following you run away."<<endl;
               cout<<"You continue making your way towards town for another hour or so then get ready to sleep."<<endl;
               cout<<"The next day, the sun rises high in the sky. A merchant drives by your sleeping body."<<endl;
               cout<<"You were slain in your sleep"<<endl;
               }
               while(ch1<=0&&ch1>4){
                   cout<<"Hey dummy, this isn't that type of game.There are no easter eggs to be found here. Follow the plot."<<endl;
                   cin>>ch1;
               }
               //Display Output
                
               break;
           }
           case 2:{
               cout<<"Knight"<<endl;
               //Input values
               //Process values -> Map inputs to Outputs 
               //Display Output
               break;
           }
           case 3:{
               cout<<"Priest"<<endl;
               //Input values
               //Process values -> Map inputs to Outputs 
               //Display Output
               break;
           }
           case 4:{
               cout<<"Thief"<<endl;
               //Input values
               //Process values -> Map inputs to Outputs 
               //Display Output
               break;
           }
           case 5:{
               cout<<"Wizard"<<endl;
               //Input values
               //Process values -> Map inputs to Outputs 
               //Display Output
               break;
           }
           case 6:{
               cout<<"Deprived"<<endl;
               //Input values
               //Process values -> Map inputs to Outputs 
               //Display Output
               break;
           }//End Case
       }//End the Switch/Case
   }while(menuItm>0&&menuItm<=6);//Ends the Do-While Loop

   //Exit Program
   return 0;
}



