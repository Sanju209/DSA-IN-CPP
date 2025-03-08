//Time complexity = O(n + nlogn)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int majorityElement(vector<int> arr) {
    int n = arr.size();
    int freq = 1;

    sort(arr.begin(), arr.end()); //sorting time complexity = O(nlogn)

    for(int i = 1; i < n; i++) {
        if(arr[i] == arr[i-1]) {
            freq++;
        }
        else {
            freq = 1;
        }

        if(freq > n/2) {
            return arr[i];
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {2,2,2,2,3,3,3,3,3};

    cout << majorityElement(arr) << endl;
}