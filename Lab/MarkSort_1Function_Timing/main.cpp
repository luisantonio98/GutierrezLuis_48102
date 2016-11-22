/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on November 21st, 2016, 8:05 AM
 * Purpose:  Mark Sort in 1 function
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
void markSrt(int [],int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    int const SIZE=100000;
    int array[SIZE],utilize;
    
    //Input or initialize values Here
    do{
        cout<<"How much of the array to utilize?"<<endl;
        cout<<"Choose a number between 2 and 100000"<<endl;
        cin>>utilize;
    }while(utilize<2||utilize>100000);
    
    //Fill the array
    fillAry(array,utilize);
    
    //Output Located Here
    //prntAry(array,utilize);
    
    //Test out minPos
    unsigned int beg=time(0);
    markSrt(array,utilize);
    unsigned int end=time(0);
    cout<<"The time it took to sort the array = "<<end-beg<<" secs"<<endl;
    
    //Output Located Here
    //prntAry(array,utilize);

    //Exit
    return 0;
}

void markSrt(int a[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(a[i]>a[j]){
                a[i]=a[i]^a[j];
                a[j]=a[i]^a[j];
                a[i]=a[i]^a[j];
            }
        }
    }
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
        a[i]=rand();
    }
}