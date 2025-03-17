// staircase search

// one of the fastest way to search in a matrix
// consider that given array is sorted row and column wise


// 1. direct search the key by iterating all index
// 2. search using binary search over row

// 3 using staircase

#include<iostream>
using namespace std;

int staircasesearch(int a[][4],int n, int m){
    int i=0,j=m-1;
    int key=14;
    int found=0;
    while(i<n && j>=0){
        if(a[i][j]==key){
            cout<<"key found at index :"<<i<<","<<j<<endl;
            found=1;
            break;
        }else if(a[i][j]<key){
            i++;
        }else{
            j--;
        }
    }
   
    if(found==0){
        cout<<"key is not found";
    }
}



int main(){
    int a[4][4]={
        {1,4,8,10},
        {2,5,9,15},
        {6,13,18,20},
        {11,14,21,25}
    };

    int n=4,m=4;
    int ans=staircasesearch(a,n,m);
}