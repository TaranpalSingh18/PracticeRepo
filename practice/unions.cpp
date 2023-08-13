#include<iostream>
using namespace std;



union money
{
    int rice;
    char car;
    float pounds;
};

int main(){
 
 union money m1;

 m1.rice=2;
 m1.car='m';
 m1.pounds=5.5;

 cout<<"paise yaha kharch hue hai"<<m1.rice<<endl;
 cout<<"paise yaha kharch hue hai"<<m1.car<<endl;
 cout<<"paise yaha kharch hue hai"<<m1.pounds<<endl;
  
  if(m1.rice<3){
    cout<<"Itne paise nahi hai bhai"<<endl;
  }

  else{
    cout<<"Haa itne bhi gareeb nahi hai hum"<<endl;
  }

    return 0;
}