//Time complexity = O(n)
//Using two pointer approach 
//Whenever we are dealing with pairs of numbers ina array think of two pointpointer approach

#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> arr, int target) {
    int start = 0, n = arr.size(), end = n - 1;
    vector<int> ans;

    while(start < end) {
        if(arr[start] + arr[end] == target) {
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }
        else if(arr[start] + arr[end] > target) {
            end--;
        }
        else {
            start++;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {2,7,11,15};

    vector<int> ans = pairSum(arr, 18);

    cout << ans[0] << ", " << ans[1] << endl;

}