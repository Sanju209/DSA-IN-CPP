//Find maximum subarray sum using brute force 
//Time complexity = O(n^2)

#include <iostream>
#include <climits>
using namespace std;

int maxSubArraySum(int arr[], int n) {
    int maxsum = INT_MIN, currsum = 0;

    for(int start = 0; start < n; start++) {
        currsum = 0;
        for(int end = start; end < n; end++) {
            currsum += arr[end];
            maxsum = max(currsum , maxsum);
        }
    }
    return maxsum;
}

int main (void) {
    int arr[] = {3,-4,5,4,-1,7,-8};
    
    int ans = maxSubArraySum(arr, 7);
    cout << ans << endl;
}