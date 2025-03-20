#include<iostream>
#include<cstring>
using namespace std;

int length(char arr[]){
    int i;
    for(i=0;arr[i]!='\0';i++){

    }

    return i;
}

int main(){
    char arr[1000];
    cin.getline(arr,1000);

    int ans=length(arr);
    cout<<ans<<endl;


    cout<<strlen(arr)<<endl;
}