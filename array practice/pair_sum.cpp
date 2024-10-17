#include<iostream>
using namespace std;

int main(){

    int arr[6]={2,7,5,11,4,6};
    int sum=0;
    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            sum=arr[i]+arr[j];
        //    cout<<arr[i]<<"," <<arr[j]<<endl;
            if(sum==9){
                cout<<arr[i]<<"," <<arr[j]<<endl;
            }
        }
    }
}
