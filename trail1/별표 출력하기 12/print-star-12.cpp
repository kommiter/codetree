#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n; cin >> n;

    for (int i = 0; i < n; i++){
        cout << "*";
        if (i != n-1) cout << " ";
    }
    cout << "\n";

    int mid = n/2;

    for (int i = 1; i < 2 * mid; i++) {
                int level = i / 2;
        int front = 2 + level * 4;

        for (int j = 0; j < front; j++) {
            cout << " ";
        }

        for (int j = level; j < mid; j++) {
            cout << "*";
            if (j < mid - 1) cout << "   ";
        }
        cout << "\n";
    }
    return 0;
}