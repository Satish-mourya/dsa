// taking input from the character array

/*
cin ignores the white spaces

s|a|t|i|s|h| " "|
once we press enter the  charcter inside in the console will go to input buffer
from input buffer we cannot deleter the character

cin takes whitespaces, tab,\ as enter

input pointer is used in cin.get()

cin.get()-> 
            it will pick the character where input -pointer is pointing at 
*/


#include<iostream>
using namespace std;

void readLine(char a[], char delimiter){
    int i=0;
    char ch=cin.get();

    while(ch!=delimiter){
        a[i]=ch;
        ch=cin.get();  // helps to get input as character
        i++;
    }

    a[i]='\0';

    
}

int main(){
    char a[100];

    // readLine(a,'a');
   

    // using inbuilt function

    cin.getline(a,100); // to change delimiter we can write like   cin.getline(a,100,'any charcter');
    cout<<a;
    
    return 0;

    
}

