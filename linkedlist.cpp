// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Node{
 public:
    int data;
    Node *next;
};
class LinkedList{
  public:
    Node *head=NULL;
    void InsertAtBegining(int value){
        Node *node=new Node();
        node->data=value;
        node->next=NULL;
        if(head==NULL){
            head=node;
        }
        node->next=head;
        head=node;
    }
        void InsertAtLast(int value){
        Node *node=new Node();
        node->data=value;
        node->next=NULL;
        if(head==NULL){
            head=node;
        }
        Node *temp=head;
        while(temp->next!=NULL){
         temp=temp->next;
        }
        temp->next=node;

    }
    void DeleteFromBegining(){
        Node* temp = head;
        temp = head->next;
        delete temp;
    }
    void print(){
        Node* temp = head;
        
        while(temp->next !=NULL){
            cout<<temp->data<<endl;
            temp= temp->next;
        }
    }
};
int main() {
LinkedList l;
l.InsertAtBegining(1);
l.InsertAtBegining(2);
l.InsertAtBegining(3);
l.InsertAtLast(4);
l.InsertAtLast(5);
l.print();

    return 0;
}
