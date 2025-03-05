//binary search using loops
//do not use mid = (start + end)/2 bcz when start and are INT_MAX and we add them we will get integer overflow error
//instead use mid = start + (emd - start)/2. This optimization is very important 
//time complexity = O(logn)
//To apply binary search the array must be sorted  
//if there is a sorted array always think of binary search first

#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int target) {
    int start = 0, end = arr.size() - 1;
    
    while(start <= end) {
        int mid = start + (end - start)/2;

        if(target < arr[mid]) {
            end = mid - 1;
        }
        else if(target > arr[mid]) {
            start = mid + 1;
        }
        else {
            return mid;
        }
    }
    return -1; 
}
    
int main() {
    vector<int> arrEven = {1,2,3,4,5,6};
    vector<int> arrOdd = {1,2,3,4,5,6,7};
    int even, odd;

    even = binarySearch(arrEven, 5);
    odd = binarySearch(arrOdd, 5);

    cout << even << endl << odd << endl;
}