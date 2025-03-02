// This method is called 2 pointer approach 

#include <iostream> 
using namespace std;

void reverseArray(int arr[], int n) {
    int start = 0, end = n-1, temp = 0;

    while(start < end) {
        swap(arr[start], arr[end]);
        /* Logic of swap function
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp; */
        start++;
        end--;
    }
}

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i];
    }
    cout << endl;
}

int main() {
    int arr[5] = {1,2,3,4,5};

    cout << "Original Array : ";
    printArray(arr, 5);
    
    reverseArray(arr, 5);

    cout << "Reverse Array : ";
    printArray(arr, 5);

}