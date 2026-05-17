#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n; cin >> n;
    for (int i = 1; i <= n; i++){
        if (i%2) {cout << "*\n"; continue;}
        for (int j = 0; j < i; j++){
            cout << "*";
            if(j != i-1) cout << " ";
        }
        cout << "\n";
    }
    return 0;
}