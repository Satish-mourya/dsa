#include<iostream>
using namespace std;

void spiralPrint(int a[][4], int row, int col){
    int sr=0;
    int sc=0;
    int er=row-1;
    int ec=col-1;

    while(sr<=er && sc<=ec){
        // 1.print from sc to ec
        // sr++

        for(int i=sc ;i<=ec;i++){
            cout<<a[sr][i]<<" ";
        }
        sr++;
        cout<<endl;
         // 2.print from sr to er
        // ec--

        for(int i=sr;i<=er;i++){
            cout<<a[i][ec]<<" ";
        }

        ec--;
        cout<<endl;
         
         // 3.print from ec to sc
        // er--
        if(sr<er){
        for(int i=ec;i>=sc;i--){
            cout<<a[er][i]<<" ";
        }

        er--;
    }
        cout<<endl;
         // 4.print from er to sr
        // sr++
    if(sc<ec){
        for(int i=er;i>=sr;i--){
            cout<<a[i][sc]<<" ";
        }

        sc++;
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

    spiralPrint(arr,row,col);
    return 0;
}

/*
1 2 3 4
5 6 7 8
9 10 11 12

*/