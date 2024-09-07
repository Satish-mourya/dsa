#include<iostream>
using namespace std;

// *
// **
// ***
// ****

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    
    // for number
    // 1
    // 22
    // 333
    // 4444
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    // for character;
    // A
    // BB
    // CCC
    // DDDD
    char ch='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){

            cout<<ch<<" ";
        }
        cout<<endl;
        ch++;
    }
}