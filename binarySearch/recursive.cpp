//Binary search using recursion 
//Time complexity = O(logn)

#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr,int target, int start, int end) {
    
    if(start <= end) {
        int mid = start + (end - start)/2;
        if(target < arr[mid]) {
            return binarySearch(arr,target, start, mid - 1);
        }
        else if(target > arr[mid]) {
            return binarySearch(arr,target, mid + 1, end);
        }
        else {
            return mid;
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {1,2,3,4,5,6,7};

    int ans = binarySearch(arr, 1, 0, 6);

    cout << ans << endl;

}