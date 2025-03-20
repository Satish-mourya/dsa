// removing the duplicate character which lies adjacently
// ex coddiddng

#include<iostream>
#include<cstring>

using namespace std;

void removeDuplicate(char a[]){
    int len=strlen(a);

    int j=1;
    int i=0;
    while(j<len){
        if(a[i]!=a[j]){
            i++;
            a[i]=a[j];
        }

        j++;
    }

    a[i+1]='\0';
}

int main(){
    char a[1000];
    cin.getline(a,1000);

    removeDuplicate(a);

    cout<<a;

    return 0;
}