// using new keyword that allocate memory dynamically in heap
#include <iostream>
using namespace std;

class student{
private:
    int roll;
    string name;
public:
    student(int r, string n) {
        roll = r;
        name = n;
    }
    void display() {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }


};
int main() {
    student* s1 = new student(1, "Anil");
    s1->display();

    return 0;
}
