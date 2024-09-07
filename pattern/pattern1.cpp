#include<iostream>
using namespace std;

// 1234
// 1234
// 1234
// 1234
 
int main(){

    int n;
    cin>>n;

    // for number pattern
    for(int i=1;i<=n;i++){               // 1st loop is for row
        for(int j=1;j<=n;j++){           // 2nd row is for column
            cout<<j<<" ";
        }
        cout<<endl;                     
    }


    // for * pattern 
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }


    //for character pattern

    for(int i=1;i<=n;i++){
        char ch='A';
        for(int j=1;j<=n;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }



}