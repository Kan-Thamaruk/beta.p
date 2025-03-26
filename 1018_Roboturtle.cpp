#include <bits/stdc++.h>
using namespace std;
int n, dir[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}}, di, x, y, dis;
string a;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> n;
    while (n--) {
        cin >> a >> dis;
        if (a == "BW") di = (di + 2) % 4;
        else if (a == "LT") di = (di + 1) % 4;
        else if (a == "RT") di = (di + 3) % 4;
        x += dir[di][0] * dis;
        y += dir[di][1] * dis;
        if (abs(x) >= 50000 || abs(y) >= 50000) return cout << "DEAD", 0;
    }
    cout << x << " " << y << "\n" << "ENWS"[di];
    return 0;
}