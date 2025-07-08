#include<iostream>
using namespace std;
namespace first{
	void display(){
		cout<<"Binay"<<endl;
	}
}
namespace second{
	void display(){
		cout<<"Chaudhary"<<endl;
	}
}
	int main(){
		first::display();
		second::display();
		return 0;
}
