#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int>s;
    s.push(5);
    s.push(47);
    cout<<s.size()<<endl;
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.empty();

}