#include<iostream>
using namespace std;

class queue{
public:
	int arr[4];
	int rare=0, front=0;
	int size = sizeof(arr)/sizeof(arr[0]);

	int isfull(){

		return rare==size;
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
			rare++;
		}

	}

	void print(){
	    cout<<"List in queue: ";
		for(int i=front;i<rare;i++){
			cout<<arr[i]<<" ";
		}

	}
	
	void dequeue(){
		if(isempty()){
			cout<<"Queue is empty"<<endl;
		}
		else{
		cout<<"\nDequeued element is: "<<arr[front]<<endl;
			front++;
		}
	}
};

int main(){
queue que;
que.enqueue(1);
que.enqueue(2);
que.enqueue(3);
que.enqueue(4);
que.enqueue(4);
que.print();
que.dequeue();
que.print();
return 0;
}