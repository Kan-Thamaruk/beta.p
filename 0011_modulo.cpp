#include <bits/stdc++.h>
using namespace std;
set<int> as;
int main() {
    int a;
    for (int i=0;i<10;i++) {
        cin >> a;
        as.insert(a%42);
    }
    cout << as.size();
    return 0;
}