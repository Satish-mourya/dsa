// two pointer approach
// applied in sorted array

// find pair that when added give us the sum()
// sum=11 arr[]={ 1,4,5,6,8,10}

#include<iostream>
using namespace std;

int main(){
    int arr[]={ 1,4,5,6,8,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=11;
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]+arr[j]==sum){
            cout<<arr[i]<<","<<arr[j]<<endl;
            j--;
            i++;
        }else if(arr[i]+arr[j]>sum){
            j--;
        }else if(arr[i]+arr[j]<sum){
            i++;
        }
    }

    return 0;
}
