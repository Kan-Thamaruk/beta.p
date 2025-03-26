#include <bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    double x = 0, y = 0;
    while (true) {
        string c, s, k;
        cin >> c;
        if (c == "*") {
            cout << fixed << setprecision(3) << x << " " << y << "\n" << sqrt(x * x + y * y);
            return 0;
        }
        for (char ch : c) isdigit(ch) ? k += ch : s += ch;
        double n = stoi(k), d = sqrt(n * n / 2);
        if (s == "N") y += n;
        else if (s == "E") x += n;
        else if (s == "S") y -= n;
        else if (s == "W") x -= n;
        else if (s == "NE") x += d, y += d;
        else if (s == "SE") x += d, y -= d;
        else if (s == "NW") x -= d, y += d;
        else if (s == "SW") x -= d, y -= d;
    }
    return 0;
}