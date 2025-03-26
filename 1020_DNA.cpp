#include <bits/stdc++.h>
using namespace std;
int di[]={0,1,0,-1,1,1,-1,-1};
int dj[]={1,0,-1,0,1,-1,1,-1};
int mod = 1e9 +7;
int inf = 2e9;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    string a,b;
    cin>>a>>b;
    int n = a.size(), m = b.size(), longest = 0, sti;
    vector<vector<int>> dp(n + 1, vector<int>(m + 1));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i - 1] == b[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                if (dp[i][j] > longest) {
                    longest = dp[i][j];
                    sti = i;
                }
            }
        }
    }
    for (int i = sti - longest; i < sti; i++) {
        cout << a[i];
    }
    return 0;
}