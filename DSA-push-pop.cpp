#include<iostream>
using namespace std;

class stack {
    int top=0;
    int arr[5];

    public:

    int isEmpty() {
        return top == 0;
    }

    int isfull(){
        return top == sizeof(arr)/sizeof(arr[0]);
    }
    void push(int x) {
        if(isfull()) {
            cout << "Stack is full" << endl;
            return;
        }
        else {
        arr[top] = x;
        top++;
        }
    
}

void print(){
    
    for(int i=0;i<top;i++){
        cout<<arr[i]<<" ";
    }
}
    void pop() {
        if(isEmpty()){
            cout << "Stack is empty" << endl;
            return;
        }
        top = top - 1;
    }

};

int main() {
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);// This should indicate that the stack is full

    cout << "Stack elements: ";
    s.print();
    cout << endl;

    s.pop();
  

    cout << "Stack elements after popping 1 elements: ";
    s.print();
    cout << endl;

    return 0;
}