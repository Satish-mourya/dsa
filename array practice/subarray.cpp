// print the nsubarray
#include<iostream>
#include<vector>
using namespace std;

// formula to find subarray   
// (n*(n+1))/2



//  approach => start from the start and end elements
int main(){
    int n=5;
    int arr[5]={1,2,3,4,5};
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k];
            }
            cout<<" ";
        }
        cout<<endl;
     }
     return 0;
}