//Without using extextra variable num

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the height : ";
    cin >> n;

    for(int i = 1; i <= n*n; i+=n) {
        for(int j = i; j<= i+n-1; j++) {
            cout << j << " ";
        }
        cout << "\n";
    } 
}