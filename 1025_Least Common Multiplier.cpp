#include <bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &x : arr) cin >> x;
    sort(arr.begin(), arr.end());
    int lcm = arr.back();

    while (true) {
        if (all_of(arr.begin(), arr.end(), [&](int x) { return lcm % x == 0; })) {
            cout << lcm;
            return 0;
        }
        lcm += arr.back();
    }
    return 0;
}