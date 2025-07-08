// complex number using operator overloading

#include<iostream>
using namespace std;

class complex{
    private:
        int real;
        int image;
    public:
        complex(int r=0,int i=0){
            real=r;
            image=i;
        }
    complex operator+(const complex& other){
        complex result;
            result.real=this->real+other.real;
            result.image=this->image+other.image;
            return result;
    }
    void display(){
        cout<<real<<"+"<<image<<"i"<<endl;
}

};
int main(){
    complex c1(1,2);
    complex c2(3,4);
    complex c3= c1+c2;
    c3.display();
    return 0;
}