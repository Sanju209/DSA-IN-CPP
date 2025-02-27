#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the height : ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        char ch = 'A'; //this should be inside the first loop as it should reset to A after each row
        for(int j = 1; j <= n; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << "\n";
    }
}