#include <bits/stdc++.h>
using namespace std;
char a[5];
int b[5];
int main() {
    for (int i=0;i<3;i++) {cin >> b[i];}
    for (int i=0;i<3;i++) {cin >> a[i];}
    sort (b,b+3);
    for (int i=0;i<3;i++) {
        if (a[i]=='A') {cout << b[0];}
        else if (a[i]=='B') {cout << b[1];}
        else if (a[i]=='C') {cout << b[2];}
        cout << " ";
    }
    return 0;
}