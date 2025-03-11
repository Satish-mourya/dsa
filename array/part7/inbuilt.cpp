#include<iostream>
#include<algorithm>
using namespace std;


bool compare(int a,int b){
    return a>b;
}
int main(){
    int a[]={1,2,4,6,7,6,7,4,5,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    sort(a,a+n);

    for(int k=0;k<n;k++){
        cout<<a[k]<<" ";
    }

    cout<<endl;

    // for descending

    sort(a,a+n,compare);

    for(int k=0;k<n;k++){
        cout<<a[k]<<" ";
    }
}