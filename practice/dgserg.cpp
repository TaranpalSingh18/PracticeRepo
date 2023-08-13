#include <bits/stdc++.h>
using namespace std;
int printArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"7";
    }
    
}
int main()
{
    int n;
    cin>>n;

    int arr[n];
    int i=0;

    while(i < n)
    {
        cin>>arr[i];
        i++;
    }
    
    printArray(arr,n);
    
    return 0;
}
