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



int main(){
    node* head;
    head=new node(5);
    cout<<head->data<<" "<<head->next;
}

