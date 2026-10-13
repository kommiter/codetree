#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n; cin >> n;
    for(int i = n; i >= 1; i--){
        for (int j = n; j >= 1; j--){
            cout << '(' << i << ',' << j << ')';
            if (j != 1) cout << " ";
        }
        cout << "\n";
    }
    return 0;
}