// rotate an array by n times anticlockwise

// way 1-> hello
//            1. pick last character store in varible
//            2. copy last 2nd character in the last character , continue the process till 0th index
//            3. give the 0th index value same as picked 
//            4. run the wwhole process by n times

#include<iostream>
#include<cstring>

using namespace std;

void rotate(char a[],int n){
    int len=strlen(a);
    int i=len-1;
    while(i>=0){
        a[i+n]=a[i];
        i--;
    }

    i=0;
    int j=len;
    while(i<n){
        a[i]=a[j];
        i++;
        j++;
    }

    a[len]='\0';

    
}

int main(){
    char a[1000]="satishmourya";
    int n;
    cin>>n;

    rotate(a,n);
    cout<<a;

    return 0;
}
