#include <bits/stdc++.h>
using namespace std;
string s;
int main() {
    cin >> s;
    int sz = s.size(), a = 0, b = 0;
    for (int i = 0; i < sz; i++) {
        a = ((s[i] - '0') + a*10) % 3;
        b = ((s[i] - '0') + b*10) % 11;
    }
    cout << a << ' ' << b;
    return 0;
}