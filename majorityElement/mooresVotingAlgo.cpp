//Time complexity = O(n)
//MOORE'S VOTING ALGORITHM is the most optimized way to solve this problem 

#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> arr) {
    int freq = 0, ans = 0;
    int n = arr.size();

    for(int i = 0; i < n; i++) {
        if(freq == 0) {
            ans = arr[i];
        }

        if(ans == arr[i]) {
            freq++;
        }
        else {
            freq--;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {2,2,2,2,3,3,3,3,3};

    cout << majorityElement(arr) << endl;
}