#include <iostream>
using namespace std;

int main() {
    // Sorted array (important for binary search)
    int arr[] = {12, 23, 45, 67, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "->";
    }
    cout << endl;

    int num;
    cout << "Enter the number to search: ";
    cin >> num;

    int lower = 0, upper = size - 1;
    int mid;
    int foundIndex = -1;

    while (lower <= upper) {
        mid = (lower + upper) / 2;

        if (num == arr[mid]) {
            foundIndex = mid;
            break;   // element found
        }
        else if (num < arr[mid]) {
            upper = mid - 1;
        }
        else {
            lower = mid + 1;
        }
    }

    if (foundIndex != -1) {
        cout << "The number " << num << " is found at index " << foundIndex;
    } else {
        cout << "The number " << num << " is not found in the array";
    }

    return 0;
}

