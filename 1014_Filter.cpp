#include <bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int w, h, n, w1 = 0, w2 = 0, x, a;
    cin >> w >> h >> n;
    vector<int> wall(w, 0);
    while (n--) {
        cin >> x >> a;
        for (int j = x; j < x + a && j < w; ++j) wall[j]++;
    }
    for (auto val : wall) {
        if (val == 0) w1++;
        if (val == 1) w2++;
    }
    cout << w1 * h << " " << w2 * h;
    return 0;
}