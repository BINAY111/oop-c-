// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Hashtable{
  public:
    int h[10];
    int size = 10;
    int hash(int n){
        return n%size;
    }
    Hashtable(){
        for(int i=0;i<size;i++){
            h[i] = -1;
        }
    }
    void insert(int n){
        int originalindex = hash(n);
        int index = originalindex;
        while(h[index] != -1){
            index = (index+1)%size;
            if(index == originalindex){
                cout<<"Hashtable is full"<<endl;
                return;
            }
        }
        h[index] = n;
    }
    void print(){
        for(int i=0;i<size;i++){
            cout<<h[i]<<" "<<endl;
        }
    }
};
int main() {
    Hashtable h;
    h.insert(1);
    h.insert(2);
    h.insert(3);
    h.insert(4);
    h.insert(5);
    h.insert(6);
    h.insert(7);
    h.insert(8);
    h.insert(9);
    h.insert(10);
    h.insert(20);
    h.print();

    return 0;
}

// The below code helps to print "Hashtable is full" only at once even though there are too many elements are forced to insert 

// // Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std;

// class Hashtable{
//   public:
//     int h[10];
//     int size =10;
//     int hash(int n){
//         return n%size;
//     }
//     Hashtable(){
//         for(int i=0;i<size;i++){
//             h[i] = -1;
//         }
//     }
//     bool isFull = false;
//     void insert(int n){
//         if(isFull) return;
//         int originalindex = hash(n);
//         int index = originalindex;
        
//         while(h[index] != -1){
//             index = (index+1)%size;
//             if(index == originalindex){
//                 cout<<"Hashtable is full."<<endl;
//                 isFull = true;
//                 return;
//             }
//         }
//         h[index] = n;
//     }
//     void print(){
//         for(int i=0;i<size;i++){
//             cout<<h[i]<<" "<<endl;
//         }
//     }
// };
// int main() {
// Hashtable h;
// h.insert(1);
// h.insert(10);
// h.insert(12);
// h.insert(3);
// h.insert(4);
// h.insert(14);
// h.insert(5);
// h.insert(7);
// h.insert(6);
// h.insert(8);
// h.insert(9);
// h.insert(40);
// h.insert(80);
// h.insert(1);

// h.print();

//     return 0;
// }