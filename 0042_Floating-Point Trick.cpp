#include <bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        long double a, b = 1;
        cin >> a;
        for (int j = 0; j < a; j++) {
            b *= 2;
        }
        cout << fixed << setprecision(0) << b << '\n' ;
    }
    return 0 ;
}