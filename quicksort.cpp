#include<iostream>
using namespace std;
#include<iostream>
using namespace std;

int Partion(int a[], int low, int high) {
    int pivot = a[low];
    int stateIndex = low + 1;

    for (int j = low + 1; j <= high; j++) {
        if (a[j] < pivot) {
            int temp = a[stateIndex];
            a[stateIndex] = a[j];
            a[j] = temp;
            stateIndex++;
        }
    }
    int swap = a[stateIndex - 1];
    a[stateIndex - 1] = a[low];
    a[low] = swap;

    return stateIndex - 1;
}

void quickSort(int a[], int low, int high) {
    if (low < high) {
        int pivotIndex = Partion(a, low, high);
        quickSort(a,low,pivotIndex - 1);
        quickSort(a,pivotIndex + 1,high);
    }
}

void printSort(int a[], int size) {
    for (int i = 0; i < size; i++) {
        cout << a[i] <<"->";
    }
    cout << endl;
}

int main() {
    int Size;
    cout << "Enter the size of an Array" << endl;
    cin >> Size;

    int a[Size];
    for (int i = 0; i< Size; i++) {
        cout << "Enter the number ";
        cin >> a[i];
    }

    cout << "Original Array : ";
    printSort(a,Size);

    quickSort(a,0,Size - 1);

    cout << "Sorted Array : ";
    printSort(a,Size);
    return 0;
}

// int main(){
// int n;
// cout<<"Enter the size of an array: ";
// cin>>n;

// int a[n];
// for(int i=0;i<n;i++){
//     cout<<"Enter the number: ";
//     cin>>a[i];
// }
// cout<<"original array : ";
// for(int j=0;j<n;j++){
//     cout<<a[j]<<"->";
// }




//     return 0;
// }