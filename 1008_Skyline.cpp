#include <bits/stdc++.h>
using namespace std;
int arr[260];
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, l, h, r, r_max;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> l >> h >> r;
        r_max = max(r, r_max);
        for (int j = l; j < r; j++) arr[j] = max(arr[j], h);
    }
    for (int i = 1; i <= r_max; i++)
    {
        if(arr[i]!=arr[i-1]) cout << i << " " << arr[i] << " ";
    }
    return 0;
}