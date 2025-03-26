#include <bits/stdc++.h>
using namespace std;

int keep[30];
int main() {
    cin.tie(0)->sync_with_stdio(0);
    while (true) {
        char opr, c1, c2;
        cin >> opr;
        if (opr == '!') break;
        cin >> c1;
        int var1 = c1 - 'A';
        if (opr == '#') cout << keep[var1] << "\n";
        else if (opr == '=') cin >> keep[var1];
        else {
            cin >> c2;
            int var2 = c2 - 'A';
            if (opr == '+') keep[var1] += keep[var2];
            else if (opr == '-') keep[var1] -= keep[var2];
            else if (opr == '*') keep[var1] *= keep[var2];
            else if (opr == '/') keep[var1] /= keep[var2];
        }
    }
    cout << '!';
    return 0;
}