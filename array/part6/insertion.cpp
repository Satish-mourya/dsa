#include<iostream>
using namespace std;

int main(){
    int a[]={-8,8,76,99,4};
    int n=5;
    int i,j;

    for( i=1;i<n;i++){
        int key=a[i];
        for(j=i-1;j>=0;j--){
            if(a[j]>key){
                a[j+1]=a[j];
            }else{
                break;
            }
        }

        a[j+1]=key;

    }

    for(int k=0;k<n;k++){
        cout<<a[k]<<" ";
    }
}