#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < 2 * n; i++) {
        int cnt;

        if (i % 2 == 0)
            cnt = n - i / 2;
        else
            cnt = (i + 1) / 2;

        for (int j = 0; j < cnt; j++) {
            if (j > 0) cout << " ";
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}