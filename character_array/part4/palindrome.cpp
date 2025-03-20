#include<iostream>
#include<cstring>

using namespace std;

bool ispalindrome(char a[]){
    int i=0;
    int j=strlen(a)-1;

    while(i<j){
        if(a[i]!=a[j]){
            return false;
        }

        i++;
        j--;
    }

    return true;
}

int main(){
    char a[1000];
    cin>>a;

    if(ispalindrome(a)){
        cout<<" it is palindrome";
    }else{
        cout<<" it is not palindrome";
    }


    return 0;
}