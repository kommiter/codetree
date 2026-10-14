#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            int num = i*n+j;
            cout << ((num)%4 + 1)*2;
            if (j != n-1) cout << " ";
        }
        cout << "\n";
    }
    return 0;
}