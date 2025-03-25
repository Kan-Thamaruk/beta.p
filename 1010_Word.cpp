#include <bits/stdc++.h>
using namespace std;
int n, m, word;
string s;
int di[] = {1, -1, 1, -1, 0, 0, 1, -1};
int dj[] = {1, -1, -1, 1, 1, -1, 0, 0};
char arr[1000][1000];
int len;
bool play(int y, int x, int state, int dir) {
    if (y >= n || x >= m || y < 0 || x < 0 || arr[y][x] != tolower(s[state])) return 0;
    if (state == len - 1) return 1;
    int ii = y + di[dir];
    int jj = x + dj[dir];
    if(play(ii, jj, state + 1, dir)) return 1;
    return 0;
}
int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char x;
            cin >> x;
            arr[i][j] = tolower(x);
        }
    }
    cin >> word;
    while (word--) {
        bool ch = false;
        cin >> s;
        len = s.size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (play(i, j, 0, 0) || play(i, j, 0, 1) || play(i, j, 0, 2) || play(i, j, 0, 3) || play(i, j, 0, 4) || play(i, j, 0, 5) || play(i, j, 0, 6) || play(i, j, 0, 7)) {
                    cout << i << " " << j << '\n';
                    ch = true;
                }
                if (ch) break;
            }
            if (ch) break;
        }
        s = "";
    }
    return 0;
}
