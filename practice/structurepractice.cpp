#include<iostream>
using namespace std;

struct student
{
    int p;
    int m;
    int c;
};

int main(){
    struct student taran;
    taran.p=91;
    taran.m=94;
    taran.c=95;

    cout<<"Marks obtanined by Taran in physics is "<<taran.p<<endl;
    cout<<"the marks obtained by Taran in Maths is "<<taran.m<<endl;
    cout<<"the marks obtained by Taran in chemistry is "<<taran.c<<endl;

  int sum=taran.p+taran.c+taran.m;
  if(sum>=270){
    cout<<"congratulations you've passed the examination"<<endl;}


  else{
    cout<<"you could have done much more better! Please Try Again "<<endl;
  }
    return 0;
}