#include<iostream>
using namespace std;

void printArray(int arr[], int size){

    cout<<"printing the array"<<endl;
    for( int i=0; i<size; i++){
        cout<<arr[i]<<endl;
    }
    cout<<"Printing is Done"<<endl;
}

int main(){

    int one[10]={1,2,3};

    int n=10;
    printArray(one,10);

    int second[15];
    cout<<"size of array second is"<<sizeof(second)/sizeof(int) ;

    

return 0;
}