// syntax of 2D array
/*

datatype array_name[no-of-rows][no-of-cols];

-> while creating a 2D array , we have to mention both the rows and columns value 
 ex=> 
 int arr[4][5];  // declaration 

 
*/

#include<iostream>
using namespace std;

int main(){
    int arr[4][5]; // declaration of 2d array 
    // now at this time it contains the garbage value;
    cout<<arr[3][4]<<endl;

    int a[3][3]={   // intializing the 2d array
        {1,2,3},
        {4,5},
        {6,7,8}
    };
    cout<<a[2][2]<<endl;

    int b[][3]={  // i can left to intialize the row but column must be inialized
        {2,3,4},
        {3,2,3}
    };
    // printing the array

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }

        cout<<endl;
    }
}

