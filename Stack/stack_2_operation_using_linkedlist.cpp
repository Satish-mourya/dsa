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

 class Stack{
    Node *top;
    int size; // actual size 

    public:

    Stack(){
        top=NULL;
        size=0;
    }

    // push

    void push(int value)
    {
        Node * temp= new Node(value);
        if(temp==NULL){
            cout<<"Stack overflow"<<endl;
        }
        cout<<value<<" is pushed"<<endl;
        temp->next=top;
        top= temp;
        size++;
    }

    void pop()
    {
        if(top==NULL){
            cout<<"Stack underflow"<<endl;
            return;
        }
        else
        {
            Node * temp=top;
            cout<<top->data<<" is popped"<<endl;
            top=top->next;
            delete temp;
            size--;
        }
    }

    int peek(){
        if(top==NULL){
            cout<<"Stack is Empty";
        }else{
            return top->data;
        }
    }

    bool isEmpty(){
        return top==NULL;
    }

    int isSize(){
        return size;
    }

 };

 int main(){
    Stack s;
    s.push(2);
    s.push(34);
    s.push(299);
    s.pop();
    cout<<s.peek()<<"is peek"<<endl;
 }
