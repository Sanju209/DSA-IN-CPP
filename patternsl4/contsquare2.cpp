//Using extra variable num

#include <iostream>
using namespace std;

int main() {
    int n;
    int num = 1;

    cout << "Enter the height : ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j<= n; j++) {
            cout << num << " ";
            num++;
        }
        cout << "\n";
    } 
}