#include<iostream>

using namespace std;

 int sum(int a,int b){
    int c=a+b;
    return c;
    }

int main(){
    int num1,num2;
    cout<<"Enter the value of 1st number"<<endl;
    cin>>num1;
    cout<<"Enter the vakue of 2nd number"<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1,num2)<<endl;
    return 0;
}


