//given integer n, return the difference between the product of digits and the sum of digits

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int sum=0;
    int product=1;

    while(n!=0){
        int digit=n%10;
        sum=sum+digit;
        product=product*digit;

        n=n/10;

    }

    cout<<product-sum<<endl;



    return 0;

}