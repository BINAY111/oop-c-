#include <iostream>
using namespace std;

class A {
private:
    int privatevariable;
public:
    int publicvariable;
protected:
    int protectedvariable;
public:
    int getprotectedvariable() {
        return protectedvariable;
    }
};

class B : public A {
public:
    void setprotectedvariable(int x) {
        protectedvariable = x;
    }
};

int main() {
    B b;
    b.setprotectedvariable(10);
    cout << "Protected variable: " << b.getprotectedvariable() << endl;

    return 0;
}
