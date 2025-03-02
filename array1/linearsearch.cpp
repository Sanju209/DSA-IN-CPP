#include <iostream>
using namespace std;

int linearSearch(int arr[], int num, int target) {
    for(int i = 0; i < num; i++) {
        if(arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n, target, index;
    cout << "Enter the size of the array : ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the target : ";
    cin >> target;

    index = linearSearch(arr, n, target);

    cout << "The target is found at index : " << index << endl;
}