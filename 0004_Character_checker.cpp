#include <bits/stdc++.h>
using namespace std;

char a[10010];

int main() {
    double capA=0,capa=0;
    cin >> a;
    for (int i=0;i<strlen(a);i++) {
        if (a[i] >= 97) {capA++;}
        else if (a[i] < 97) {capa++;}
    }
    if (capa == strlen(a)) {cout << "All Capital Letter";}
    else if (capA == strlen(a)) {cout << "All Small Letter";}
    else {cout << "Mix";}
    return 0;
}