#include <bits/stdc++.h>
using namespace std;
int n, cnt = 0, arr[20][20], res = 0;
set<int> distinctRow;
void ff(int i, int j, int target) {
    if (i < 0 || i >= n || j < 0 || j >= n || arr[i][j] != target) return;
    arr[i][j] = 0, cnt++, distinctRow.insert(i);
    ff(i + 1, j, target), ff(i - 1, j, target), ff(i, j + 1, target), ff(i, j - 1, target);
}
int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> n;
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) cin >> arr[i][j];
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) {
        if (arr[i][j]) {
            ff(i, j, arr[i][j]);
            if (cnt == 3 && distinctRow.size() == 2) res++;
            cnt = 0, distinctRow.clear();
        }
    }
    cout << res << "\n";
    return 0;
}