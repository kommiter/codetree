#include <iostream>
using namespace std;
const int MAXN = 11;
int arr[MAXN][MAXN] = {0, };

int main() {
    // Please write your code here.
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            bool flag1 = i > 0;
            bool flag2 = j < n-1;
            // x + y = 2 (1, 1) ~ x + y = 4 (1, 3) x + y >= 2
            bool flag3 = (j >= i);
            if(flag1 && flag2 && flag3) arr[i][j] = 1;
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << ((arr[i][j])?' ':'*');
            if (j != n-1) cout << " ";
        }
        cout << "\n";
    }
    return 0;
}