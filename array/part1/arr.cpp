#include<iostream>
using namespace std;

int main(){
    int a[]={2,3,4,5,6,7};
    for(int i=0;i<6;i++){
       cout<< a[i] <<" ";
    }

    int n;
    
    cout<<"enter the number of input";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];

    }
    // cout << a print the address of a[0]
}

