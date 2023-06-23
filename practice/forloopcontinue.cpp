#include<iostream>
using namespace std;
int main(){

    int i=1;

    for(i>0; i<=40; i++){
        if(i==2){
            continue;
        }
        /*code*/
        cout<<i<<endl;
        
    }
    return 0;
}
//pehle continue ki command do fir print karwao
//pehle cout dedega toh 1 se lekar 40 tak print pehle hojayenge fir i==2 continue wali command is senseless!
