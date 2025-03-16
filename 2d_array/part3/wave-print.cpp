//  printing the array in wave form 

#include<iostream>
using namespace std;


int main(){
    int row ,col;
    cout<<"Enter the number of row:";
    cin>>row;
    cout<<"Enter the number of column:";
    cin>>col;

    int arr[row][col];
    int value=1;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            arr[i][j]=value;
            value++;
        }
    }

    // printing in wave form

    for(int i=0;i<col;i++){
        if(i%2==0){
            for(int j=0;j<row;j++){
                cout<<arr[j][i]<<" ";
            }
            cout<<endl;
        }else{
            for(int j=row-1;j>=0;j--){
                cout<<arr[j][i]<<" ";
            }
            cout<<endl;
        }
    }

    // 1 2 3 
    // 4 5 6
}