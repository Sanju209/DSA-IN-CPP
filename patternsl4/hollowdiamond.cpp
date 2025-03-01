#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the height : ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        for(int j = n; j >= 1; j-- ) {
            if(j == i) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }

        for(int j = i-1; j > 0; j--) {
            if(j > 1) {
                cout << "  ";
            }
            else {
                cout << "* ";
            }
        }
        cout << "\n";
    }

        for(int i = n; i > 0; i--) {
            for(int j = n; j > 0; j--) {
                if(j == i-1) {
                    cout << "* ";
                }
                else {
                    cout << "  ";
                }
            }
            
            for(int j = 3; j <= i; j++) {
                if (j == i) {
                    cout << "* ";
                }
                else {
                    cout << "  ";
                }
            }
            cout << "\n";
        }
}