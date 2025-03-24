#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0) -> ios::sync_with_stdio(0);
    int  n,m,mx=0,mn=1000000000000;
    cin >> n;
    cin >> m;
    mx = m;
    mn = m;
    n--;
    while (n--) {
        cin >> m;
        mx = max(mx,m);
        mn = min(mn,m);
    }
    cout << mn << "\n" << mx;
    return 0;
}