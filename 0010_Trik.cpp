#include <bits/stdc++.h>
using namespace std;
int b[] = {1,0,0};
string aa;
int main() {
    cin >> aa;
    for (auto X:aa) {
        if (X == 'A') {swap(b[0],b[1]);}
        else if (X == 'B') {swap(b[1],b[2]);}
        else if (X == 'C') {swap(b[0],b[2]);}
    }
    cout << find(b,b+3,1)-b+1;
    return 0;
}