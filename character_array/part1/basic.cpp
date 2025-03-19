/*strings

set of character stored with the null at the end

null -> "\0"

*/

/*
    intialization of string

    1. char a[3]={"a","b"} -> it is not string
    2. char a[3]={"a","b","\0"} -> it is string

*/


#include<iostream>
using namespace std;

int main(){

    char a[]={'s','a','t','\0'};
    char b[]="satish"; // null appends on it own

    cout<<a<<endl;
    cout<<b<<endl;
    // iterating over character array

    int i=0;
    while(b[i]!='\0'){
        cout<<b[i]<<" ";
        i++;
    }

  
    return 0;
}