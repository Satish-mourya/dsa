#include<iostream>
using namespace std;

class node{
    public:

    int data;
    node *next;

    node(int value){
        data=value;
        next=NULL;
    }
};

// creating a node statically

/*int main(){
    node n1;
    n1.data=4;
    n1.next=NULL;

    cout<<n1.data<<" "<<n1.next;
} */

// creating node dynamically

int main(){
    node* head=new node(5);
    // head->data=4;
    // head->next=NULL;
    cout<<head->data<<" "<<head->next;

}

