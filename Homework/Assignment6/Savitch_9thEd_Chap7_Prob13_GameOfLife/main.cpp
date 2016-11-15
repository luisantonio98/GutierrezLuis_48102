/* 
 * File:   main.cpp
 * Author: Luis Gutierrez
 * Created on November 15, 2016, 10:23 AM
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <ctime>      //Time
#include <cstdlib>    //Random Function
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const int ROWS=22;//Number of Rows
const int COLS=80;//Number of columns

//Function prototypes
void fillAry(char [][ROWS][COLS],int);
void prntAry(char [][ROWS][COLS],int);
void prntAry(int[][COLS],int);
void glider(char [][ROWS][COLS],int,int,int);
void random(char [][ROWS][COLS],int);
void neybor(char [][ROWS][COLS],int,int [][COLS]);
void nextGen(char [][ROWS][COLS],int,int [][COLS]);
void pause(int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declaration of Variables
    const int NGEN=200;//Maximum array size, number of generations
    char life[NGEN][ROWS][COLS];
    int count[ROWS][COLS];
    int wait=1;//Number of seconds to wait
    
    //Initialize the array
    fillAry(life,NGEN);
    
    //Test print a generation
    prntAry(life,0);
    pause(wait);
    
    //A glider in at a couple of positions
    random(life,0);
    glider(life,0,10,38);
    glider(life,0,0,0);
    glider(life,0,15,65);
    
    //Test print a generation with glider
    prntAry(life,0);
    pause(wait);
    
    //Loop a number of generations
    for(int gen=0;gen<NGEN-1;gen++){
        neybor(life,gen,count);
        nextGen(life,gen,count);

        //Print the generation
        prntAry(life,gen+1);
        pause(wait);
    }

    //Exit Program
    return 0;
}

void pause(int wait){
    int beg=time(0),end;
    do{
        end=time(0);
    }while(end-beg<wait);
}

void nextGen(char life[][ROWS][COLS],int nGEN,int count[][COLS]){
    //Compare and count the neighbors
    for(int row=0;row<ROWS;row++){
        for(int col=0;col<COLS;col++){
            //Apply the rules
            if(count[row][col]<2)life[nGEN+1][row][col]='-';  //Death
            if(count[row][col]==2||count[row][col]==3)
                life[nGEN+1][row][col]=life[nGEN][row][col];  //Let alone
            if(count[row][col]==3)life[nGEN+1][row][col]='X'; //Birth
            if(count[row][col]>3)life[nGEN+1][row][col]='-';  //Death
        }
    }
}

void neybor(char life[][ROWS][COLS],int nGen,int count[][COLS]){
    //Clear the count array
    for(int row=0;row<ROWS;row++){
        for(int col=0;col<COLS;col++){
            count[row][col]=0;
        }
    }
    //Compare and count the neighbors
    for(int row=0;row<ROWS;row++){
        for(int col=0;col<COLS;col++){
            for(int roff=row-1;roff<=row+1;roff++){
                for(int coff=col-1;coff<=col+1;coff++){
                    if(roff==row&&coff==col)continue;//Center
                    if(roff<0)continue;          //Row Edge
                    if(coff<0)continue;          //Col Edge
                    if(roff==ROWS)continue;      //Row Edge
                    if(coff==COLS)continue;      //Col Edge
                    if(life[nGen][roff][coff]=='X')count[row][col]++;
                }
            }
        }
    }
}

void glider(char life[][ROWS][COLS],int gen,int row,int col){
    life[gen][row+0][col+1]='X';
    life[gen][row+1][col+2]='X';
    life[gen][row+2][col+0]='X';
    life[gen][row+2][col+1]='X';
    life[gen][row+2][col+2]='X';
}

void prntAry(char life[][ROWS][COLS],int gen){
    //Print the generation you want to look at
    cout<<gen<<endl;
    for(int row=0;row<ROWS;row++){
        for(int col=0;col<COLS;col++){
            cout<<life[gen][row][col];
        }
        cout<<endl;
    }
    cout<<endl;
}

void prntAry(int count[][COLS],int ROWS){
    //Print the generation you want to look at
    cout<<endl;
    for(int row=0;row<ROWS;row++){
        for(int col=0;col<COLS;col++){
            cout<<count[row][col];
        }
        cout<<endl;
    }
    cout<<endl;
}

void fillAry(char life[][ROWS][COLS],int gener8){
    for(int gen=0;gen<gener8;gen++){
        for(int row=0;row<ROWS;row++){
            for(int col=0;col<COLS;col++){
                life[gen][row][col]='-';
            }
        }
    }
}

void random(char life[][ROWS][COLS],int gener8){
    for(int gen=0;gen<=gener8;gen++){
        for(int row=0;row<ROWS;row++){
            for(int col=0;col<COLS;col++){
                if(rand()%10==0)life[gen][row][col]='X';
            }
        }
    }
}
