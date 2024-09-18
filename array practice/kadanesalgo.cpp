#include<iostream>
using namespace std;

int main(){
     int arr[7]={3,-4,5,4,-1,7,-8};
     int min= 0;
     int max1=0;

for(int i=0;i<7;i++){
    min=min+arr[i];
    max1=max(max1,min);
    if(min<0){
        min=0;
    }
}
cout<<max1;
}