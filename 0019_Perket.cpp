#include<bits/stdc++.h>
using namespace std;
int num1[10], num2[10];
int main() {
    cin.tie(0) -> sync_with_stdio(0);
    int N;
    cin >> N;
    for (int i = 0; i < N; ++i) cin >> num1[i] >> num2[i];
    int minDiff = 1e9;
    for (int mask = 1; mask < (1 << N); mask++) {
        int sour = 1, bitter = 0;
        for (int i = 0; i < N; ++i) {
            if (mask & (1 << i)) {
                sour *= num1[i];
                bitter += num2[i];
            }
        }
        int diff = abs(sour - bitter);
        if (diff < minDiff) minDiff = diff;
    }
    cout << minDiff;
    return 0;
}