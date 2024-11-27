#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int value){
         data=value;
        next=NULL;
    }
};

// inserting a node at starting

Node * insertAtBeg(Node* head,int data){
    Node* new_node = new Node(data);
    new_node->next=head;
    head=new_node;
    return head;
}

Node* insertAtEnd(Node* head, int data){
    Node* new_node= new Node(data);
    Node * temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new_node;
    return head;
}

int main(){
     Node* head=new Node(45);
     Node* temp=head;

     while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
     }
     cout<<endl;
     head=insertAtEnd(head,60);
     temp=head;
     while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
     }
}