#include<iostream>
#include<vector>
using namespace std;
 
 //1st way to inialize
//  int main(){
//     vector<int> vec={1,2,3};
//     cout<<vec[0];
//     return 0;

//  }


// 2nd way to write
//     int main(){
//         vector<int>vec(3,0);
//         cout<<vec[0]<<endl;
//         cout<<vec[1]<<endl;
//         cout<<vec[2]<<endl;
        
//     }

int main(){
    vector<int> vec={1,2,3};
    for(int val:vec){
        cout<<val<<endl;
    }

 
    // some useful function

cout<<"size ="<<vec.size()<<endl; // used to find size
vec.push_back(5);// used to ADD  new element in the back side 
vec.pop_back(); // used to remove a element from back

cout<<"adding a new element "<<vec.front()<<endl; // used to print the 1st value of vector
cout<<"adding a new element "<<vec.back()<<endl; // used to print the last value of vector
cout<<"adding a new element "<<vec.at(2)<<endl; // used to print the  value  at particular position of vector


 


}