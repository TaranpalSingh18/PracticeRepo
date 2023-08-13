#include<iostream>

using namespace std;

int fib( int n){
    {
        if(n<2)
        return n;
    }
return fib(n-1)+fib(n-2);
}

int main(){
    int a;
    cout<<"enter the value of the ath term of fibonacci term"<<endl;
    cin>>a;
    cout<<"the value of tkhEWG"<<fib(a);

    return 0;

}
