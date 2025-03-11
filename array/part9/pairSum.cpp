// find pair that when added give us the sum()
// sum=11 arr[]={ 1,4,5,6,8,10}


#include<iostream>
using namespace std;

int main(){
    int arr[]={1,4,5,6,8,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==11){
                cout<<arr[i]<<","<<arr[j]<<endl;
            }
        }
    }

    return 0;
}

