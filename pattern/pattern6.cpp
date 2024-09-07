#include<iostream>
using namespace std;

// 1
// 23
// 456


int main(){
    int count=1;
   int  n=3;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;

    }
}