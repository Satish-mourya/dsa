#include<iostream>
using namespace std;

// revrese an array
int main(){
    string name;
    cout<<"Enter the name :";
    cin>>name;
    int start=0;
    int end=name.size()-1;
    while(start<end){
        char r=name[start];
        name[start]=name[end];
        name[end]=r;
        start++;
        end--;

    }
    cout<<name;

}