// sizeof() -> gives the size

#include<iostream>
using namespace std;

void printArray(int arr[], int n){  // size specification is optional but i have to passed the correct size 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int a[]={2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);

    printArray(a,n);

}
