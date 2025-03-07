//Time complexity = O(n^2)

#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> arr, int target) {
    int start = 0, n = arr.size(), end = n - 1;
    vector<int> ans;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {2,7,11,15};

    vector<int> ans = pairSum(arr, 18);

    cout << ans[0] << ", " << ans[1] << endl;

}