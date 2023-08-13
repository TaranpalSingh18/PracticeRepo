#include<iostream>
using namespace std;

int sum( int a , int b){
    return a+b;
}

int sum(int a, int b, int c ){
    return a+b+c;
}

//volume of a cube
int volume( int a){
    return (a*a*a);
}

//volume of a cuboid
int volume( int l, int b , int h){
    return (l*b*h);
}

//volume of a cylinder
int volume( double r, int h){
    return (3.14*r*r*h);
}
int main(){
    cout<<"the value of sum of 3 and 6 is "<<sum(3,6)<<endl;
    cout<<"the value of sum of 3, 4 and 6 is "<<sum(3,4,6)<<endl;
cout<<"the volume of a cube whose dimension a is 5 is"<<volume(5)<<endl;
cout<<"the volume of a cuboid whose l, b and h are 3,4,and 5 respectively is"<<volume(3,4,5)<<endl;
cout<<"the volume of a cylinder whose radius is 3 and height is 4 is"<<volume(3,4)<<endl;

  return 0;
}