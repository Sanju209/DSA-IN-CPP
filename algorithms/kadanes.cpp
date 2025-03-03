//Most optimized way to solve maximum subarray sum problem is kadane's algorithm 
//Time compexity = O(n)

#include <iostream>
#include <climits>
using namespace std;

int kadanes(int arr[], int n) {
    int maxsum = INT_MIN, currsum = 0;

    for(int i = 0; i < n; i++) {
        currsum += arr[i];
        maxsum = max(currsum, maxsum);
        if(currsum < 0) {
            currsum = 0;
        }
    }
    return maxsum;
}

int main (void) {
    int arr[] = {3,-4,5,4,-1,7,-8};

    int ans = kadanes(arr, 7);
    cout << ans << endl;
}