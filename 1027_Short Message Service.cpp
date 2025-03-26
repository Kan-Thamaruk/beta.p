#include <bits/stdc++.h>
using namespace std;

int arr[7];
int main() {
    cin.tie(0)->sync_with_stdio(0);
    string voted;
    while (cin >> voted && voted != "!") {
        for (char c : voted) if (arr[c - 'A'] != -1) arr[c - 'A']++;
        int m = INT_MAX, idx = -1, cnt = 0;
        for (int i = 0; i < 7; i++) {
            if (arr[i] == -1) continue;
            cnt++;
            if (arr[i] < m) m = arr[i], idx = i;
        }
        if (cnt > 1 && count(arr, arr + 7, m) == 1) arr[idx] = -1;
    }

    vector<pair<int, int>> order;
    for (int i = 0; i < 7; i++) if (arr[i] != -1) order.emplace_back(arr[i], -i);
    sort(order.begin(), order.end(), greater<>());
    cout << order.size() << '\n';
    for (auto [i, j] : order) cout << (char)(-j + 'A') << ' ' << i << '\n';
    return 0;
}