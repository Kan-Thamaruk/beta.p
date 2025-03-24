#include <bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int j, I = 0, V = 0, X = 0, L = 0, C = 0;
    cin >> j;
    for (int i = 1; i <= j; ++i) {
        int d = i;
        C += d / 100; d %= 100;
        if (d >= 90) { C++; X++; d -= 90; }
        L += d / 50; d %= 50;
        if (d >= 40) { L++; X++; d -= 40; }
        X += d / 10; d %= 10;
        if (d == 9) { X++; I++; d -= 9; }
        V += d / 5; d %= 5;
        if (d == 4) { V++; I++; d -= 4; }
        I += d;
    }
    cout << I << ' ' << V << ' ' << X << ' ' << L << ' ' << C;
    return 0;
}