#include<iostream>

using namespace std;

int factorial( int a){
    {
        if(a<=1)
        return 1;
    }
    return a*factorial(a-1);
}
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    cout<<"the value of factorial is 1"<<factorial(n)<<endl;

return 0;
}
