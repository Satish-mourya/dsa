#include<iostream>
using namespace std;

int main(){
    int arr[]= {2,7,11,15};
     int i=0;
     int j=3;
     int target=26;
    while(i<j){
       if(arr[i]+arr[j]>target) {
        j--;
       }else if(arr[i]+arr[j]<target){
        i++;
       }else if(arr[i]+arr[j]==target){
          cout<<arr[i]<<"," <<arr[j]<<endl;
          return 0 ;
       }

    }
}