// implement it with array
#include<iostream>
using namespace std;
class Stack {

    public:
    int *arr; // points to index of arr
    int size; // size of the array
    int top;  // points to top element of array
    
    Stack(int s){
        size=s;  // size of stack will be (s)
        top=-1;  // pointing to the top element
        arr=new int[s]; // array is formed with size s
    }

    //push

    void push(int value){
        if(top==size-1){
            cout<<"overflow"<<endl;
            return;
        }else{

        top++;
        arr[top]=value;

        cout<<"pushed "<<value<<" into the stack"<<endl;
        }
    }
    // pop
    void pop(){
        if(top==-1){
            cout<<"stack underflow";
            return;
        }
        else{
            cout<<"value is popped:"<<arr[top]<<endl;
            top--;
            
        }
    }

    //peek

    int peek(){
        if(top==-1){
            cout<<"stack empty"<<endl;
            return -1;
        }else{
            return arr[top];
        }
    }
    //IssEmpty

    bool IsEmpty(){
        return top==-1;
    }
    //IsSize

    int IsSize(){     // return the number of element present in stack
        return top+1;
    }

};

 int main(){
    Stack s(5);
    s.push(5);
    s.push(3);
    s.push(6);
    s.push(6);
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.push(6);
    cout<<s.peek()<<endl;
    cout<<s.IsEmpty()<<endl;
    cout<<s.peek()<<endl;
 }
