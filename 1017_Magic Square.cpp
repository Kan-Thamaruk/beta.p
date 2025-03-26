#include <bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n));
    unordered_set<int> uniqueNumbers;
    int sum = n * (n * n + 1) / 2;
    for (auto &row : arr)
        for (auto &val : row) {
            cin >> val;
            if (val < 1 || val > n * n) return cout << "No", 0;
            uniqueNumbers.insert(val);
        }
    if (uniqueNumbers.size() != n * n) return cout << "No", 0;
    for (int i = 0, rowSum, colSum; i < n; i++) {
        rowSum = colSum = 0;
        for (int j = 0; j < n; j++) rowSum += arr[i][j], colSum += arr[j][i];
        if (rowSum != sum || colSum != sum) return cout << "No", 0;
    }
    int mainDiagonalSum = 0, secondaryDiagonalSum = 0;
    for (int i = 0; i < n; i++) {
        mainDiagonalSum += arr[i][i];
        secondaryDiagonalSum += arr[i][n - i - 1];
    }
    cout << (mainDiagonalSum == sum && secondaryDiagonalSum == sum ? "Yes" : "No");
    return 0;
}