#include<iostream>
using namespace std;

int main(){
    int n=8;
    int pre=0;
    int curr=1;
        cout<<pre<<"->"<<curr<<"->";
    for(int i=2;i<n;i++){
        int next = pre+curr;
        pre=curr;
        curr=next;
        cout<<next<<"->";
    }
    return 0;
}

