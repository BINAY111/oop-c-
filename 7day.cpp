/*Behaviour of protected Base class inheritant in Derived class*/

#include<iostream>
using namespace std;

class Base{
    private:
        int privatevar=2;
    protected:
        int protectedvar=3;
    public:
        int publicvar=4;
        int getprivatevar(){
            return privatevar;
        }
};

class child: protected Base{
    public:
        int getpublicvar(){
            return publicvar;
        }
        int getprotectedvar(){
            return protectedvar;
        }
        int try_getprivatevar(){
            return getprivatevar();
        }

};
int main(){
    child d;
    cout<<"protectedvar-> "<<d.getprotectedvar()<<endl;
    cout<<"publicvar-> "<<d.getpublicvar()<<endl;
    cout<<"privatevar-> "<<d.try_getprivatevar()<<endl;
    return 0;
}