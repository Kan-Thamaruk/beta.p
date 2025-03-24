#include <bits/stdc++.h>
using namespace std;
int num[110];
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n; cin >> n;
    if (n < 6) {
        cout << "no";
        return 0;
    }
    num[0] = 1;
    for (int i = 6; i <= n; ++i) {
        if (num[i - 6] || (i >= 9 && num[i - 9]) || (i >= 20 && num[i - 20])) {
            num[i] = 1;
            cout << i << "\n";
        }
    }
    return 0;
}