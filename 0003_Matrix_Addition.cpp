#include <bits/stdc++.h>
using namespace std;

int mt1[110][110],mt2[110][110];

int main() {
    int m,n;
    cin >> m >> n;
    for (int i=0;i<m;i++) {
        for (int j=0;j<n;j++) {
            cin >> mt1[i][j];
        }
    }
    for (int i=0;i<m;i++) {
        for (int j=0;j<n;j++) {
            cin >> mt2[i][j];
        }
    }
    for (int i=0;i<m;i++) {
        for (int j=0;j<n;j++) {
            cout << mt1[i][j]+mt2[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}