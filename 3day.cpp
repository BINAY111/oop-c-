/*Base class inheritant in derived class publicly and
different constructors called*/

#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base constructor called" << endl;
    }
    Base(int a){
        cout<<"Base constructor called with 1 parameter"<<endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived constructor called" << endl;
    }
    Derived(int a):Base(a) {
        cout << "Derived constructor called with 1 parameter" << endl;
    }
};

int main() {
    Derived d; 
    cout<<"--------------------"<<endl;
    Derived d1(10);  
    return 0;
}
