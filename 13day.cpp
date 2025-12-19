//Exception handling
//write c++ program to take 2 integers from user and divide them, if denominator is zero then throw an exception and catch it in main function.

#include<iostream>
using namespace std;

class divide{
    private:
        int numerator;
        int denominator;
    public:
        divide(int numerator, int denominator){
           this->numerator = numerator;
            this->denominator = denominator;
        }
        void division(){
            if(denominator != 0){
                denominator=numerator/denominator;
                cout<<"result: "<<denominator;
            }
            else{
                throw string("0 value in denominator is exception");
            }
        }
};
int main(){
    int num,denom;
    cout<<"Enter first number: ";
    cin>>num;
    cout<<"Enter second number: ";
    cin>>denom; 
    divide d(num,denom);
    try{

    d.division();
    }
    catch (string& e){
        cout<<"Exception occured: "<<e<<endl;
    }
    return 0;
}