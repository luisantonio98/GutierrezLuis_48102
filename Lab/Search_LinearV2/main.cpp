/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on November 21st, 2016, 8:05 AM
 * Purpose:  Linear Search to find all values
 */

//System Libraries Here
#include <iostream>  //I/O
#include <cstdlib>   //Random
#include <ctime>     //Time
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void fillAry(int [],int);
void prntAry(int [],int);
int  linSrch(int [],int,int,int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    int const SIZE=2000;
    int array[SIZE],utilize=1000,value,whrFnd=-1;
    
    //Input or initialize values Here
    do{
        cout<<"What value in the array do you want to find?"<<endl;
        cout<<"Choose a number between 10 and 100"<<endl;
        cin>>value;
    }while(value<10||value>100);
    
    //Fill the array
    fillAry(array,utilize);
    
    //Output Located Here
    prntAry(array,utilize);
    
    do{
        //Test out linear search
        whrFnd=linSrch(array,utilize,whrFnd+1,value);

        //Output Located Here
        cout<<"The value "<<value<<" was found at index = "<<whrFnd<<endl;
    }while(whrFnd!=-1);

    //Exit
    return 0;
}

int linSrch(int a[],int n,int pos,int val){
    for(int i=pos;i<n;i++){
        if(a[i]==val)return i;
    }
    return -1;
}

void prntAry(int a[],int n){
    //Output Located Here
    cout<<"The Array"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%10==9)cout<<endl;
    }
    cout<<endl;
}

void fillAry(int a[],int n){
    //Fill the array
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;//Random 2 digit number
    }
}