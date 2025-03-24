#include <bits/stdc++.h>
using namespace std;
string s[10];
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    for (int i = 0; i < n; i++) {
        int dice[6] = {1, 2, 3, 5, 4, 6};
        int sz = s[i].size();
        for (int j = 0; j < sz; j++) {
            if (s[i][j] == 'F') {
                swap(dice[0], dice[3]); 
                swap(dice[1], dice[3]); 
                swap(dice[3], dice[5]);
            }
            else if (s[i][j] == 'B') {
                swap(dice[0], dice[1]); 
                swap(dice[1], dice[5]); 
                swap(dice[3], dice[5]);
            }
            else if (s[i][j] == 'L') {
                swap(dice[0], dice[4]); 
                swap(dice[2], dice[4]); 
                swap(dice[4], dice[5]);
            }
            else if (s[i][j] == 'R') {
                swap(dice[0], dice[2]); 
                swap(dice[2], dice[5]); 
                swap(dice[4], dice[5]);
            }
            else if (s[i][j] == 'C') {
                swap(dice[1], dice[4]); 
                swap(dice[2], dice[4]);
                swap(dice[3], dice[4]);
            }
            else if (s[i][j] == 'D') {
                swap(dice[1], dice[2]); 
                swap(dice[2], dice[3]); 
                swap(dice[3], dice[4]);
            }
        }
        cout << dice[1] << ' ';
    }
    return 0;
}