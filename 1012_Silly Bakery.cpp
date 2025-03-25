#include <bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    double num = 0, s1, s2, s3, s4, s5;
    cin >> n;
    while (n--) {
        cin >> s1 >> s2 >> s3 >> s4 >> s5;
        num += s1 + s2 * 0.75 + s3 * 0.5 + s4 * 0.25 + s5 * 0.125;
    }
    cout << ceil(num);
    return 0;
}