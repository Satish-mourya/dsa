#include<iostream>
using namespace std;

//1111
// 222
//  33
//   4

int main(){
    int n;
    cin>>n;
    int space=0;

    for(int i=0;i<n;i++){
        int space=i;
        for(int j=0;j<n;j++){
            if(space>j){
                cout<<" ";
            }else{
                cout<<i+1;
            }
        }
        cout<<endl;
    }

    // 2nd approach

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }

        
        for(int j=0;j<n-i;j++){
            cout<<i+1;
        }

        cout<<endl;

        
    }


}