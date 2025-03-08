//Time complexity = O(n^2)

#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> arr) {
    int n = arr.size();
    int freq = 0;

    for(int i = 0; i < n; i++) {
        freq = 0;
        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                freq++;
            }
            if(freq > n/2) {
                return arr[i];
            }
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {2,3,3};

    cout << majorityElement(arr) << endl;
}