/*Multiple Base class inheritant in Derived class and those base class 
constructor called with 1 argument in derived class object*/

#include<iostream>
using namespace std;

class Base1{
    public:
    Base1(){
        cout << "Default Base1 constructor called" << endl;
    }
    Base1(int x){
        cout << "Base1 constructor called with 1 argument" << endl;
    }
};
class Base2{
    public:
    Base2(){
        cout<<"Base2 default constructor called" << endl;
    }
    Base2(int x){
        cout << "Base2 constructor called with 1 argument" << endl;
    }
};
class Base3{
    public:
    Base3(){
        cout << "Default Base3 constructor called" << endl;
    }
    Base3(int x){
        cout << "Base3 constructor called with 1 argument" << endl;
    }
};
class Derived:public Base1, public Base2,public Base3{
    public:
    Derived():Base3(3),Base2(5), Base1(1){
        cout << " Default Derived constructor called" << endl;
    }
};
int main(){
    Derived d;
    return 0;
}