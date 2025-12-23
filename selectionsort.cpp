#include<iostream>
using namespace std;

int main(){
    int arr[]={2,3,67,45,34,78,32};
    int size=sizeof(arr)/sizeof(arr[0]);
    int minindex=0;

        cout<<"unsorted list"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"->";
    }

    for(int i=0;i<size-1;i++){
        minindex=i;
        for(int j=i+1;j<size;j++){
            if(arr[minindex]>arr[j]){
                minindex=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[minindex];
        arr[minindex]=temp;
    }
    cout<<"\nsorted list"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"->";
    }

    return 0;
}
