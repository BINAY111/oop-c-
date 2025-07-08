/*Behaviour of public Base class inheritant in Derived class*/

#include<iostream>
using namespace std;
class Base{
    public:
    Base(){
        cout<<"Default Base constructor called"<<endl;
    }
    Base(int a){
        cout<<"Base constructor called with 1 argument"<<endl;  
    }
    Base(int a,int b,int c){
        cout<<"Base constructor called with 3 argument"<<endl;  
    }
};
class Derived: public Base{
    public:
    Derived(){
        cout<<"Default Derived constructor called"<<endl;
    }
};
int main(){
    Derived d;
    return 0;
}