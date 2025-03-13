// printing the subarray of the array
// arr[]={1,2,3,4};

#include<iostream>
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

void maxsubarray(int arr[],int n){
    int wi,wj;
    int max=INT16_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=arr[k];
            }
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
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    Subarray(arr,n);
    cout<<endl;
    maxsubarray(arr,n);
    return 0;
}
