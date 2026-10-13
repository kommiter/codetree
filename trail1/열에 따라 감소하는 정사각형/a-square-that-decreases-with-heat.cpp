#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = n; j >= 1; j--){
            cout << j;
            if (j != 1) cout << " ";
        }
        cout << "\n";
    }
    return 0;
}