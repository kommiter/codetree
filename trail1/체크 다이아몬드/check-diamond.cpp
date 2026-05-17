#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = n-i-2; j >= 0; j--){
            cout << " ";
        }
        for (int j = 0; j < i+1; j++){
            cout << "*";
            if (j != i) cout << " ";
        }
        cout << "\n";
    }
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < i+1; j++){
            cout << " ";
        }
        for (int j = n-i-2; j >= 0; j--){
            cout << "*";
            if (j != 0) cout << " ";
        }
        cout << "\n";
    }
    return 0;
}