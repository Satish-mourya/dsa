// complexity n^2

#include<iostream>
using namespace std;

int main(){
    int arr[7]={3,-4,5,4,-1,7,-8};
    int sum=0;
    int max1=0;

    for(int i=0;i<7;i++){
        sum=0;
        for(int j=0;j<7;j++){
            sum=sum+arr[j];
            max1=max(sum,max1);
        }
    }
    cout<<max1;
}