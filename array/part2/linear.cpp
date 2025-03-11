#include<iostream>
using namespace std;

int main(){
    int arr[]={2,4,5,6,7};
    int key;
    cout<<"enter a number: ";
    cin>>key;
    for(int i=0;i<5;i++){
        if(arr[i]==key){
            cout<<"found at "<<i;
            return 0;
        }
    }
}