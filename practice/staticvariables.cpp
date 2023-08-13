#include<iostream>

using namespace std;

int product(int a ,int b){
    int static 
return a*b;
}

int main(){
    int a;
    int b;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;
    cout<<"the value of product is "<<product(a,b)<<endl;

    return 0;
}