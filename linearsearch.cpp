// linear search 

#include<iostream>
using namespace std;

int main(){
    int arr[]={12,34,56,87,90};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Original array: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"->";
    }
    cout<<endl;
    
    int num;
    cout<<"Enter the number to search: ";
    cin>>num;
    for(int i=0;i<size;i++){
    if(num==arr[i]){
        cout<<"The number "<<arr[i]<<" is matched in Index "<<i;
            return 1;
        }
    }
        cout<<"The number "<<num<<" is not matched";
    return 0;
}
