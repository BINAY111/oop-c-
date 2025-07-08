#include<iostream>
using namespace std;

class student{
    private:
        int age;
        string name;
    public:
        void setage(int age) {
            this->age = age;
        }
        void setname(string n) {
            name = n;
        }
        int getage() {
            return age;
        }
        string getname() {
            return name;
        }
};
int main(){
    student s1;
    s1.setage(20);
    cout<< "Age: " << s1.getage() << endl;
    s1.setname("John");
    cout<< "Name: " << s1.getname() << endl;
    return 0;
}