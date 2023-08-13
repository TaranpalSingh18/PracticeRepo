/*#include<iostream>
using namespace std;

int main(){

int a,b;
cout<<"enter the value of a and b"<<endl;
cin>>a>>b;

int ans=1;

for(int i=1; i<=b; i++){

    ans= ans*a;
}

cout<<"answer is "<<ans<<endl;

    return 0;
}*/

//code bhot bulky hota jaa raha hai...therefore we use functions

#include<iostream>
using namespace std;

int power( int a, int b){

    int ans=1;
    for(int i=1; i<=b; i++){
        ans=ans*a;
    }
    return ans;
}

int main(){

    int a,b;
    cin>>a>>b;

    power(a,b);
    cout<<"answer is "<<power(a,b)<<endl;
    return 0;
}