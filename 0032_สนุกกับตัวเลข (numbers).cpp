#include<bits/stdc++.h>
using namespace std;
string str;
vector<int> v;
char x;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, c, i, j;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> c;
        v.push_back(c);
    }
    sort(v.begin(), v.end());
    for (i = 0; i < n; i++) {
        if (i == 0) {
            j = 0;
            while (5 > 4) {
                if (v[j] != 0) {
                    x = v[j] + 48;
                    str = str + x;
                    v.erase(v.begin() + j);
                    break;
                }
                j++;
            }
        } else {
            x = v[0] + 48;
            str = str + x;
            v.erase(v.begin());
        }
    }
    cout << str;
    return 0;
}