#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n; cin >> n;
    for (int i = 1; i <= n*2; i++){
        if (i%2){
            for (int j = 0; j < i/2+1; j++){
                cout << "*";
                if (j != i/2) cout << " ";
            }
        }
        else{
            for (int j = n - (i - 1) / 2; j > 0; j--) {
                cout << "*";
                if (j != 1) cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}