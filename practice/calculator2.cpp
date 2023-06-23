#include<iostream>

using namespace std;

int main(){
 char operation;

 double num1,num2,result;

 cout<<"Enter the operation you want to do (+,-,*,/)";
 cin>>operation;

 cout<<"Enter num1 ";
 cin>>num1;

 cout<<"Enter num2 ";
 cin>>num2;


 if(operation=='+'){

 result=num1+num2;

 cout<<"the sum is "<<num1+num2<<endl;
 }

 else if(operation=='-'){

   if (num1>=num2)
   {
   result=num1-num2;
    cout<<"the difference is "<<result<<endl;
   }
   else
   {
      result = num2-num1;
      cout<<"the difference is "<<result<<endl;
   }

 }

else if (operation=='*'){
    result=num1*num2;
    cout<<"the product is "<<num1*num2<<endl;

}
 
 else if(operation=='/'){

   if (num1>=num2)
   {
    result=num1/num2;
    cout<<"the quotient is "<<result<<endl;
    }
    else
    {
      result = num2/num1;
      cout<<"the quotient is "<<result<<endl;
    }
 }
 else {
    cout<<"invalid operation"<<endl;
 }
 
     return 0;

}