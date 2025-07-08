
/*switch case*/

#include<iostream>
using namespace std;

int main(){
    int choice;
    cout << "Enter 1 for freefire or 2 for pubg: ";
    cin>> choice;
    switch(choice){
        case 1:
            cout<<"you have selected freefire"<<endl;
            break;
        case 2:
            cout<<"you have selected pubg"<<endl;
            break;
            default:
            cout<<"Invalid choice"<<endl;
    }
    return 0;
}