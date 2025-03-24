#include <bits/stdc++.h>
using namespace std;

char word[30010][1010];

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    int l,n,cnt=0,ii=0,b=0;
    cin >> l >> n;
    cin >> word[0];
    for (int i=1;i<n;i++) {
        cnt = 0;
        for (int j=0;j<l;j++) {
            cin >> word[i][j];
            if (word[i-1][j] != word[i][j]&&b==0) {
                cnt++;
            }
        }
        if (cnt > 2&&b==0) {ii=i-1,b++;}
    }
    if (ii == 0,b == 0) {ii=n-1;}
    cout << word[ii];
    return 0;
}