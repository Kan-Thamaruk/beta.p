#include <bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int y;
    while (cin >> y && y != -1) {
        int p = 1, w = 1, s = 0;
        for (int i = 1; i <= y; ++i) {
            int t = p + w + s;
            s = w;
            w = t;
        }
        cout << w << " " << w + s + 1 << "\n";
    }
    return 0;
}