#include<iostream>
using namespace std;

// 1
// 21
// 321
// 4321

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=i;j>0;j--){
            cout<<j<<" ";
        }
        cout<<endl;
        
    }
}