#include<iostream>
using namespace std;

int main(){

    int n=9;
    int a=0;
    int b=1;
    cout<<a<<"";
    cout<<b<<"";

    for(int i=1; i<=n; i++){
       int nextNumber=a+b;

        cout<<nextNumber<<endl;

        a=b;
        b=nextNumber;

    }
    return 0;
}