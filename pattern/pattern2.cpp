#include<iostream>
using namespace std;

// 123
// 456
// 789
int main(){
    int n;
    cin>>n;
    int count=1;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }



    // for character
    // ABC
    // DEF
    // GHI

    char ch='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }

}