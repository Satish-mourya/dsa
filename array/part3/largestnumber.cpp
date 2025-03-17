#include<iostream>
using namespace std;

int main(){
    int arr[]={1,6,5,7,0};
    int key=arr[0];  // we can also use INT_MIN==-2^31
    for(int i=1;i<5;i++){
        if(key<arr[i]){
            key=arr[i];
        }
    }

    cout<<"maximun number is "<<key;
    return 0;
}


// range based loop also exist

// for(int num:arr){

// }