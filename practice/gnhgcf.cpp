#include<iostream>
using namespace std;

int main(){

int marks[4]= {23,24,25,26};

int n;

cout<<"Enter the value of n "<<endl;
cin>>n;

if(n>3){
    cout<<"An unexpected Error has occured"<<endl;
}
else{
    
    cout<<"the value of marks is "<<marks[n]<<endl;
    
}
    return 0;
}