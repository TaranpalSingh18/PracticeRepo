#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int i=2;
    int product=1;
    do(i<=n){
      product=product*i;
        i++;
    }
     cout<<product<<endl;


    return 0;
}