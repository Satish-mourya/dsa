#include<iostream>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int start=0;
    while(s[start]!='\0'){
        start++;
    }
    cout<<start;
}