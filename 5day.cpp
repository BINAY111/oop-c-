/*setting and getting of declared variables of a class through object*/

#include<iostream>
#include<string>
using namespace std;
class student{
    private:
        string name,address;
        int age,id;
    public:
        void setname(string name){
            this->name=name;
        }
        string getname(){
            return name;
        }
        void setaddress(string address){
            this->address=address;
        }
        string getaddress(){
            return address;
        }
        void setage(int age){
            this->age=age;
        }
        int getage(){
            return age;
        }
};
int main(){
    student s;
    s.setname("Binay");
    s.setaddress("Gangoliya");
    s.setage(20);
    cout<<"your name is: "<<s.getname();
    cout<<"\nyour address is: "<<s.getaddress();
    cout<<"\nyour age is: "<<s.getage();
    return 0;
}