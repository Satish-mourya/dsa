#include<iostream>
using namespace std;
 

int main(){
   
    string a;
    getline(cin,a); //use to print string with space,tab
    cout<<a<<endl; 
    cout<<a.size()<<endl; // use to print size of string 
    // to add two string
    string s1="sat";
    string s2="ish";
    cout<<s1+s2<<endl;
    cout<<s1.append(s2)<<endl; // adding with the help of append
    s1.push_back('m');
    s1.pop_back();
    cout<<s1;
}