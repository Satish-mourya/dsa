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

void traverse(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

}

Node * insertAtEnd(Node* head,int value){
    Node* temp=head;
    Node * new_Node= new Node(value);
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new_Node;
    return head;
}


Node* deleteAtStart(Node* head){
    if(head!=NULL){
    Node* temp=head;
    head=head->next;
    delete temp;
    return head;
    }
}

Node* deleteAtEnd(Node* head){
    if(head!=NULL){
        if(head->next==NULL){
            Node* temp=head;
            head=NULL;
            delete temp;
            return head;
        }else{
            Node* curr=head;
            Node* prev=NULL;

            while(curr->next!=NULL){
                prev=curr;
                curr=curr->next;
            }

            prev->next=curr->next;
            delete curr;
            return head;
        }
    }
}


Node* deleteAtPosition(Node * head,int position){
     if(position==1){
        Node* temp=head;
        head=head->next;
        delete temp;
        return head;
     }else{
        position--;
        Node* curr=head;
        Node* pre=NULL;
        while(position--){
            pre=curr;
            curr=curr->next;
        }

        pre->next=curr->next;
        delete curr;
        return head;

     }
}
int main(){
    Node * head=new Node(32);
    head=insertAtEnd(head,33);
    head=insertAtEnd(head,43);
    head=insertAtEnd(head,44);
    traverse(head);
    
    head=deleteAtPosition(head,3);

     traverse(head);
     
}