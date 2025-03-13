// optimized way to find max_subarray

// valid for array start with 0;
#include<iostream>
#include<climits>
using namespace std;
// printing the subarray
void Subarray(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
            }

            cout<<endl;
        }
    }
}


// finding the maximum subarray

void precomputation(int arr[],int n){
    int wi,wj;
    int csum[1000]={0};
    int max=INT_MIN;

    // pre computation to find csum array

    for(int i=1;i<n;i++){
        csum[i]=csum[i]+csum[i-1]+arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            sum=csum[j]-csum[i-1];
            
            if(sum>max){
                max=sum;
                wi=i;
                wj=j;
            }
        }
    }
    cout<<"subarray :" ;
    for(int i=wi;i<=wj;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"the max subarray is : "<<max;
}
int main(){
    int arr[]={0,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    Subarray(arr,n);
    cout<<endl;
    precomputation(arr,n);
    return 0;
}
