#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int value){
        data=value;
        next=NULL;
        prev=NULL;
    }

};

Node *insert(Node * head, int value){
    Node * new_node= new Node(value);
    Node* temp= head;
    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next=new_node;
    new_node->prev=temp;

    return head;

}

Node* insertAtpos(Node * head,int value,int p){
    Node * new_node = new Node(value);
    Node* temp= head;
    while(--p){
        temp=temp->next;
    }

    new_node->prev=temp;
    new_node->next=temp->next;
    temp->next->prev=new_node;
    temp->next=new_node;
    return head;

}

void traverse(Node * head ){
    Node * temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    Node * head= new Node(4);
    head=insert(head,6);
    head=insert(head,6);
    head=insert(head,7);
    head=insert(head,7);
    head=insert(head,7);
    head=insertAtpos(head,9,4);

    traverse(head);

}