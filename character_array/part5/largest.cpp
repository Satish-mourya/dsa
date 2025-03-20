#include<iostream>
#include<cstring>
using namespace std;

void Copy(char a[], char b[]){
    int len=strlen(b);
    for(int i=0;i<len;i++){
        a[i]=b[i];
    }
    a[len] = '\0';
}

int main(){
    char a[1000];
    char largest[1000];

    int largest_len=0;

    int n;
    cin>>n;

    cin.ignore();// for ignoring the one character

    for(int i=0;i<n;i++){
        cin.getline(a,1000);
        int len=strlen(a);

        if(largest_len<len){
            largest_len=len;
            Copy(largest,a);
        }
    }

    cout<<largest<<endl;
    cout<<"length :"<<largest_len;
    return 0;

}