#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0) -> ios::sync_with_stdio(0);
    int a,b,c;
    cin >> a >> b >> c;
    int sc = a+b+c;
    if (sc > 79) {cout << 'A';}
    else if (sc > 74) {cout << "B+";}
    else if (sc > 69) {cout << 'B';}
    else if (sc > 64) {cout << "C+";}
    else if (sc > 59) {cout << 'C';}
    else if (sc > 54) {cout << "D+";}
    else if (sc > 49) {cout << 'D';}
    else {cout << 'F';}
    return 0;
}