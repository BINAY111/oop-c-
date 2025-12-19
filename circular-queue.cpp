// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


class queue{
  int arr[5];
  int rare=0,front=0;
  int size=sizeof(arr)/sizeof(arr[0]);
  public:
    int isfull(){
        return (rare+1)%size==front;
    }
    int isempty(){
        return rare==front;
    }
    void enqueue(int data){
        if(isfull()){
            cout<<"Queue is full"<<endl;
        }
        else{
            arr[rare]=data;
            rare=(rare+1)%size;
        }
    }
    void dequeue(){
        if(isempty()){
            cout<<"Queue is empty "<<endl;
        }
        else{
            cout<<"Dequeued element: "<<arr[front]<<endl;
            front=(front+1)%size;
        }
    }
    void print(){
        cout<<"Elements in queue: ";
        int i=front;
        while(i!=rare){
            cout<<arr[i]<<"->";
             i=(i+1)%size;
        }
       cout<<endl;
        
    }
};
int main()
{
queue q;
q.enqueue(1);
q.enqueue(2);
q.enqueue(3);
q.enqueue(4);
q.enqueue(5);
q.print();
q.dequeue();
q.print();
    return 0;
}