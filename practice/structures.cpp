#include<iostream>
using namespace std;

struct employee
{
    int eID;
    int salary;
    char favChar;
};

int main(){
    struct employee taran;
    taran.eID=007;
    taran.salary=6000000;
    taran.favChar='t';

    cout<<"The value of identity which belongs to Taran is "<<taran.eID<<endl;
    cout<<"the value of identity which belongs to Taran is "<<taran.salary<<endl;
    cout<<"the value of identity which belongs to Taran is "<<taran.favChar<<endl;

    return 0;
}