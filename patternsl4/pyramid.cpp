#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the height : ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        for(int j = i; j < n; j++) {
            cout << "  ";
        }

        for(int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        for(int j = i - 1; j > 0; j--) {
            cout << j << " ";
        }

        cout << "\n";
    }
}