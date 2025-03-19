#include<iostream>
using namespace std;

// Selection Sort is a simple sorting algorithm that repeatedly selects the smallest (or largest) element from the unsorted part and swaps it with the first unsorted element.

int main(){
    int arr[]={5,3,4,1,2};
    int n=5;
    
    // for(int i=0;i<n-1;i++){
    //     int min=i;
    //     for(int j=i+1;j<n;j++){
    //         if(arr[j]<arr[min]){
    //             min=j;
    //         }

    //     }

    //     swap(arr[i],arr[min]);
    // }

    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[min],arr[i]);
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}