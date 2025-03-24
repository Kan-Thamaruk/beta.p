#include <bits/stdc++.h>
using namespace std;
int b[2550];
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, e = 0, sum = 0, s = 0, max = 0, ms = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        sum += b[i];
        if (sum <= 0) sum = 0, s = i + 1;
        if (sum > max) max = sum, e = i, ms = s;
    }
    if (max == 0) {
        cout << "Empty sequence\n";
        return 0;
    }
    for (int i = ms; i <= e; i++) cout << b[i] << " ";
    cout << "\n" << max << "\n";
    return 0;
}