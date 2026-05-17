#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n; cin >> n; n++;
    for (int i = 0; i < n*2-1; i++){
        for (int j = 0; j < n*2-1; j++){
            cout << ((i%2 && j%2)?" ":"*");
            if (j != n*2-2) cout << " ";
        }
        cout << "\n";
    }
    return 0;
}