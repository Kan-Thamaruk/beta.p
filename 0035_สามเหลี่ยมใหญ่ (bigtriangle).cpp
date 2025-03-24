#include <bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    int x[n], y[n];
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }
    float max=INT_MIN;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                if ((fabs(x[i]*y[j] + x[j]*y[k] + x[k]*y[i] - y[i]*x[j] - y[j]*x[k] - y[k]*x[i])/2) > max) {
                    max = fabs(x[i]*y[j] + x[j]*y[k] + x[k]*y[i] - y[i]*x[j] - y[j]*x[k] - y[k]*x[i])/2;
                }
            }
        }
    }
    cout << fixed << setprecision(3) << max;
    return 0;
}