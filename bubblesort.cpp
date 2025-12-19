// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int arr[]={2,34,450,12,54,3,900};
    int size = sizeof(arr)/sizeof(arr[0]);
    // int minindex=0;
    cout<<"Unsorted array: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"->";
    }
    cout<<endl;
    // for selection sort

    
    // for(int i=0;i<size-1;i++){
    //     minindex=i;
    //     for(int j=i+1;j<size;j++){
    //         if(arr[minindex]>arr[j]){
    //             minindex=j;
    //         }
    //     }
    //     int temp = arr[i];
    //     arr[i] = arr[minindex];
    //     arr[minindex] = temp;
    // }
    
    for(int i=0;i<size;i++){
        for(int j=0;j<size-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    
    cout<<"Sorted array: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"->";
    }
    return 0;
}