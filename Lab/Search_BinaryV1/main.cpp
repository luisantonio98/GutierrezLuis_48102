/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on November 21st, 2016, 8:05 AM
 * Purpose:  Binary Search
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
int  binSrch(int [],int,int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    int const SIZE=2000;
    int array[SIZE],utilize=100,value;
    
    //Input or initialize values Here
    do{
        cout<<"What value to find in the array?"<<endl;
        cout<<"Choose a number between 10 and 100"<<endl;
        cin>>value;
    }while(value<10||value>100);
    
    //Fill the array
    fillAry(array,utilize);
    
    //Output Located Here
    prntAry(array,utilize);
    
    //Test out minPos
    markSrt(array,utilize);
    
    //Output Located Here
    prntAry(array,utilize);
    
    //Utilize the Binary Search
    int find=binSrch(array,utilize,value);
    cout<<"The value "<<value<<" was found at index "<<find<<endl;

    //Exit
    return 0;
}

int  binSrch(int a[],int n,int val){
    //Declare and setup
    int begRng=0,endRng=n-1;
    //Loop until found
    do{
        int midPnt=(endRng+begRng)/2;
        if(a[midPnt]==val)return midPnt;
        else if(a[midPnt]<val){
            begRng=midPnt+1;
        }else{
            endRng=midPnt-1;
        }
    }while(endRng>begRng);
    return -1;
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
        a[i]=rand()%90+10;//Random 2 digit number
    }
}