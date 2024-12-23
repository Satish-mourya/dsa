 #include<iostream>
 using namespace std;

 class Stack
 {
    int * arr;
    int size;
    int top;

    public:
    //constructor

    Stack(int s)
    {
        size=s;
        top=-1;
        arr=new int[s];
    }

    // push
    void push(int value){
        if(top==size-1){
            cout<<"Stack overfflow\n";
            return;
        }
        else{
            top++;
            arr[top]=value;
            cout<<"pushed "<<value<<" into stack\n";
        }
    }

    // void pop
    void pop(){
       if(top==-1){
        cout<<"Stack underflow";
       } else{
        cout<<arr[top]<<" is removed"<<endl;
        top--;
       }
    }
    // peek
    int peek()
    {
        if(top==-1){
            cout<<"stack is empty";
            return -1;
        }
        else{
            cout<<arr[top]<<endl;
        }
    }
    // isempty

    bool isEmpty(){
        return top==-1;
    }
    
    int isSize(){
        return top+1;
    }
 };

 int main(){
    Stack s(5);
    s.push(4);
    
    s.push(3);
    s.push(6);
    s.push(4);
    s.push(4);
    s.push(4);
    s.pop();
    
 }