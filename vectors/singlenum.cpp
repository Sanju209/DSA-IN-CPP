// This problem is also called as unique number
//Using linear time complexity
// ^ -> XOR 
// n^n = 0
// n^0 = n

#include <iostream>
#include <vector>
using namespace std;

int singleNum(vector<int> nums) {
    int ans = 0;
    for(int val : nums) {
        ans ^= val; 
    } 
    return ans;
}

int main() {
    vector<int> nums = {1,2,2,1,4};
    int ans = 0;

    ans = singleNum(nums);
    cout << "The unique number is : " << ans << endl;
}