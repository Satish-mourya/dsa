#include<iostream>
using namespace std;

void rotateimage(int a[][4],int row, int col){
    // reverse the rows
    for(int i=0;i<row;i++){
        int x=0;
        int y=col-1;

        while(x<y){
            swap(a[i][x],a[i][y]);
            x++;
            y--;
        }
    }

 

    // take transpose

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i<j){
                swap(a[i][j],a[j][i]);
            }
        }
    }


    // print the array

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<a[i][j]<<" ";
        }

        cout<<endl;
    }

}


int main(){
    int row ,col;
    cout<<"Enter the number of row:";
    cin>>row;
    cout<<"Enter the number of column:";
    cin>>col;

    int arr[row][4];
    int value=1;
    for(int i=0;i<row;i++){
        for(int j=0;j<4;j++){
            arr[i][j]=value;
            value++;
        }
    }
  rotateimage(arr,row,col);
  
    return 0;
}