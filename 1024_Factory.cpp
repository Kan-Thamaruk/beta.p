#include <bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, mi = INT_MAX, a, b;
    cin >> n;
    vector<int> vec(n + 1), s(n + 1);
    for (int i = 1; i <= n; i++) cin >> vec[i], s[i] = s[i - 1] + vec[i];
    for (int i = 1; i <= n - 2; i++) {
        for (int j = i + 1; j <= n - 1; j++) {
            int s1 = s[i], s2 = s[j] - s1, s3 = s[n] - s1 - s2;
            int diff = abs(max({s1, s2, s3}) - min({s1, s2, s3}));
            if (diff < mi) mi = diff, a = i + 1, b = j + 1;
        }
    }
    cout << a << " " << b;
    return 0;
}