#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int line, count;
    cin >> line;
    count = line + (line % 2) - 1;
    string allLine[(int)ceil(line/2.0f)];
    for (int i = 0; i < ceil(line/2.0f); i++) {
        string thisLine(count, '-');
        thisLine[(count+1)/2 - 1 + i] = '*';
        thisLine[(count+1)/2 - 1 - i] = '*';
        allLine[i] = thisLine;
        cout << thisLine << "\n";
    }
    for (int i = floor(line / 2.0f) - 1; i >= 0; i--) {
        cout << allLine[i] << "\n";
    }
    return 0;
}